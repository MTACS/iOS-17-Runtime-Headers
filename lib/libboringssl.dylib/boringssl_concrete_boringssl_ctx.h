
@interface boringssl_concrete_boringssl_ctx : NSObject <OS_boringssl_ctx> {
    id /* block */  alert_callback;
    unsigned int  allow_server_identity_change;
    unsigned int  alpn_enabled;
    NSObject<OS_xpc_object> * alpn_protocols;
    NSObject<OS_nw_context> * async_context;
    unsigned long long  async_count;
    unsigned int  ats_enforced;
    boringssl_concrete_nw_protocol_boringssl * boringssl_handle;
    NSObject<OS_nw_array> * callbacks;
    unsigned int  cancelled;
    unsigned int  cert_lookup_done;
    unsigned short  certificate_compression_algorithm;
    unsigned int  certificate_compression_enabled;
    unsigned int  certificate_compression_used;
    id /* block */  challenge_block;
    NSObject<OS_dispatch_queue> * challenge_queue;
    char * ciphersuite_configuration_string;
    struct __CFArray { } * client_raw_public_key_certificates;
    id /* block */  connected_callback;
    unsigned char  connection_id;
    unsigned long long  current_flight_time;
    int  current_handshake_state;
    unsigned char  current_handshake_type;
    unsigned int  dtls;
    unsigned int  early_data_enabled;
    unsigned int  ech_enabled;
    int  encryption_read_level;
    int  encryption_write_level;
    unsigned int  enforce_ev;
    char * experiment_identifier;
    unsigned int  fallback_mode;
    unsigned int  false_start_enabled;
    unsigned int  false_start_used;
    unsigned int  flight_direction;
    unsigned int  grease_enabled;
    unsigned long long  handshake_end;
    id /* block */  handshake_message_callback;
    NSObject<OS_dispatch_queue> * handshake_message_callback_queue;
    unsigned long long  handshake_start;
    id /* block */  handshake_state_callback;
    unsigned long long  handshake_timer_fires;
    boringssl_concrete_boringssl_identity * identity;
    unsigned long long  inbound_byte_count;
    int  internal_error;
    unsigned int  is_probe;
    id /* block */  key_update_block;
    NSObject<OS_dispatch_queue> * key_update_queue;
    struct boringssl_legacy_ctx { unsigned int x1; void *x2; } * legacy_context;
    unsigned short  max_allowed_dtls_version;
    unsigned short  max_allowed_tls_version;
    NSObject<OS_nw_protocol_metadata> * metadata;
    unsigned short  min_allowed_dtls_version;
    unsigned short  min_allowed_tls_version;
    unsigned long long  minimum_ecdsa_key_size;
    unsigned long long  minimum_rsa_key_size;
    unsigned int  minimum_signature_algorithm;
    unsigned char  new_session_ticket_request;
    unsigned int  npn_enabled;
    unsigned long long  nsURLRequestAttribution;
    unsigned int  ocsp_enable;
    unsigned int  offered_ticket;
    boringssl_concrete_boringssl_identity * old_identity;
    NSObject<OS_nw_protocol_options> * options;
    unsigned long long  outbound_byte_count;
    struct __CFArray { } * peer_cert_chain;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * peer_public_key;
    int  peer_trust_evaluation_error;
    struct __SecTrust { } * peer_trust_ref;
    bool  peer_trust_result;
    unsigned int  peer_verification_in_progress;
    unsigned int  peer_verified;
    id /* block */  private_key_decrypt_block;
    NSObject<OS_dispatch_queue> * private_key_queue;
    id /* block */  private_key_sign_block;
    boringssl_concrete_boringssl_psk_cache * psk_cache;
    unsigned int  psk_negotiated;
    unsigned long long  read_stalls;
    unsigned int  received_certificate_request;
    unsigned int  recovered_session;
    union sockaddr_in_4_6 { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } sin; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } sin6; 
    }  remote_address;
    unsigned int  renewed;
    unsigned long long  request_epoch_ms;
    unsigned long long  response_epoch_ms;
    unsigned int  resumed;
    unsigned char  resumed_session_ticket_request;
    unsigned int  sct_enable;
    unsigned int  server;
    struct __CFArray { } * server_raw_public_key_certificates;
    boringssl_concrete_boringssl_session_cache * session_cache;
    boringssl_concrete_boringssl_session_state * session_state;
    unsigned int  session_ticket_enabled;
    id /* block */  session_update_block;
    NSObject<OS_dispatch_queue> * session_update_queue;
    struct boringssl_ctx_alert { 
        int ssl_alert_type; 
        unsigned char ssl_alert_level; 
        unsigned char ssl_alert_code; 
        unsigned char ssl_warning_count; 
    }  ssl_alert;
    struct ssl_ctx_st { } * ssl_ctx;
    unsigned short  ssl_max_version;
    unsigned short  ssl_min_version;
    struct ssl_st { } * ssl_session;
    int  ssl_state;
    unsigned int  started_flight;
    char * subject_name;
    unsigned int  tls13_aesgcm_enabled;
    unsigned int  tls13_chacha20poly1305_enabled;
    unsigned long long  total_flight_time;
    unsigned int  tried_resumption;
    unsigned int  trust_evaluation_complete;
    unsigned int  trust_invalid_certs;
    id /* block */  verify_block;
    NSObject<OS_dispatch_queue> * verify_queue;
    unsigned long long  write_stalls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
