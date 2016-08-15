#import <amqp.h>
#import <amqp_framing.h>
#import <amqp_ssl_socket.h>
#import <amqp_tcp_socket.h>

extern inline amqp_rpc_reply_t amqp_login_plain(amqp_connection_state_t state, char const *vhost, int channel_max, int frame_max, int heartbeat, const char * username, const char * password) {
    return amqp_login(state, vhost, channel_max, frame_max, heartbeat, AMQP_SASL_METHOD_PLAIN, username, password);
}
