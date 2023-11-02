
@interface HAP2CoAPClient : HAP2LoggingObject <HAP2CoAPClient, HAP2CoAPIOConsumer> {
    NSString * _accessoryName;
    NSMutableSet * _activeTokens;
    struct coap_address_t { 
        unsigned int size; 
        union { 
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
        } addr; 
    }  _address;
    id /* block */  _closeCompletion;
    NSError * _closeError;
    bool  _connected;
    <HAP2CoAPClientDelegate> * _delegate;
    double  _initialACKTimeout;
    NSThread * _ioThread;
    unsigned long long  _maxTransmitAttempts;
    struct coap_resource_t { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; int (*x6[7])(); struct UT_hash_handle { struct UT_hash_table {} *x_7_1_1; void *x_7_1_2; void *x_7_1_3; struct UT_hash_handle {} *x_7_1_4; struct UT_hash_handle {} *x_7_1_5; void *x_7_1_6; unsigned int x_7_1_7; unsigned int x_7_1_8; } x7; struct coap_attr_t {} *x8; struct coap_subscription_t {} *x9; struct coap_str_const_t {} *x10; int x11; unsigned int x12; void *x13; } * _notificationResource;
    id /* block */  _openCompletion;
    NSMutableOrderedSet * _previousEventMessageIDs;
    NSMutableOrderedSet * _previousResponseMessageIDs;
    HAP2PropertyLock * _propertyLock;
    bool  _registered;
    NSMutableDictionary * _responseCompletionsByToken;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2CoAPClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialACKTimeout;
@property (nonatomic) unsigned long long maxTransmitAttempts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alterMaxTransmitAttempts:(unsigned long long)arg1 initialACKTimeout:(double)arg2;
- (void)closeWithError:(id)arg1 completion:(id /* block */)arg2;
- (bool)connected;
- (id)delegate;
- (void)didCloseSession;
- (void)didFailToSendMessageInSession:(struct coap_session_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; struct coap_address_t { unsigned int x_7_1_1; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_2_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_2_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_2_2_3; } x_7_1_2; } x7; struct UT_hash_handle { struct UT_hash_table {} *x_8_1_1; void *x_8_1_2; void *x_8_1_3; struct UT_hash_handle {} *x_8_1_4; struct UT_hash_handle {} *x_8_1_5; void *x_8_1_6; unsigned int x_8_1_7; unsigned int x_8_1_8; } x8; struct coap_addr_tuple_t { struct coap_address_t { unsigned int x_1_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_1_2_2; } x_9_1_1; struct coap_address_t { unsigned int x_2_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_2_2_2; } x_9_1_2; } x9; }*)arg1 messageID:(unsigned long long)arg2 message:(struct coap_pdu_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned short x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; }*)arg3 reason:(unsigned long long)arg4;
- (void)didReceivePongInSession:(struct coap_session_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; struct coap_address_t { unsigned int x_7_1_1; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_2_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_2_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_2_2_3; } x_7_1_2; } x7; struct UT_hash_handle { struct UT_hash_table {} *x_8_1_1; void *x_8_1_2; void *x_8_1_3; struct UT_hash_handle {} *x_8_1_4; struct UT_hash_handle {} *x_8_1_5; void *x_8_1_6; unsigned int x_8_1_7; unsigned int x_8_1_8; } x8; struct coap_addr_tuple_t { struct coap_address_t { unsigned int x_1_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_1_2_2; } x_9_1_1; struct coap_address_t { unsigned int x_2_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_2_2_2; } x_9_1_2; } x9; }*)arg1 messageID:(unsigned long long)arg2;
- (void)didReceiveRequestInSession:(struct coap_session_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; struct coap_address_t { unsigned int x_7_1_1; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_2_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_2_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_2_2_3; } x_7_1_2; } x7; struct UT_hash_handle { struct UT_hash_table {} *x_8_1_1; void *x_8_1_2; void *x_8_1_3; struct UT_hash_handle {} *x_8_1_4; struct UT_hash_handle {} *x_8_1_5; void *x_8_1_6; unsigned int x_8_1_7; unsigned int x_8_1_8; } x8; struct coap_addr_tuple_t { struct coap_address_t { unsigned int x_1_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_1_2_2; } x_9_1_1; struct coap_address_t { unsigned int x_2_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_2_2_2; } x_9_1_2; } x9; }*)arg1 messageID:(unsigned long long)arg2 request:(struct coap_pdu_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned short x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; }*)arg3 response:(struct coap_pdu_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned short x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; }*)arg4;
- (void)didReceiveResponseInSession:(struct coap_session_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; struct coap_address_t { unsigned int x_7_1_1; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_2_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_2_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_2_2_3; } x_7_1_2; } x7; struct UT_hash_handle { struct UT_hash_table {} *x_8_1_1; void *x_8_1_2; void *x_8_1_3; struct UT_hash_handle {} *x_8_1_4; struct UT_hash_handle {} *x_8_1_5; void *x_8_1_6; unsigned int x_8_1_7; unsigned int x_8_1_8; } x8; struct coap_addr_tuple_t { struct coap_address_t { unsigned int x_1_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_1_2_2; } x_9_1_1; struct coap_address_t { unsigned int x_2_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_2_2_2; } x_9_1_2; } x9; }*)arg1 messageID:(unsigned long long)arg2 response:(struct coap_pdu_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned short x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; char *x11; char *x12; }*)arg3;
- (void)didRegister;
- (void)didUnregister;
- (id)initWithIPAddress:(id)arg1;
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2;
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 maxTransmitAttempts:(unsigned long long)arg3 initialACKTimeout:(double)arg4;
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 maxTransmitAttempts:(unsigned long long)arg3 initialACKTimeout:(double)arg4 workQueue:(id)arg5;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 withAccessoryName:(id)arg2 maxTransmitAttempts:(unsigned long long)arg3 initialACKTimeout:(double)arg4;
- (double)initialACKTimeout;
- (unsigned long long)maxTransmitAttempts;
- (void)openWithCompletion:(id /* block */)arg1;
- (void)sendRequestWithMethod:(unsigned char)arg1 path:(id)arg2 payload:(id)arg3 completion:(id /* block */)arg4;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialACKTimeout:(double)arg1;
- (void)setMaxTransmitAttempts:(unsigned long long)arg1;
- (struct coap_session_t { unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned int x5; unsigned int x6; struct coap_address_t { unsigned int x_7_1_1; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_2_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_2_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_2_2_3; } x_7_1_2; } x7; struct UT_hash_handle { struct UT_hash_table {} *x_8_1_1; void *x_8_1_2; void *x_8_1_3; struct UT_hash_handle {} *x_8_1_4; struct UT_hash_handle {} *x_8_1_5; void *x_8_1_6; unsigned int x_8_1_7; unsigned int x_8_1_8; } x8; struct coap_addr_tuple_t { struct coap_address_t { unsigned int x_1_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_1_2_2; } x_9_1_1; struct coap_address_t { unsigned int x_2_2_1; union { struct sockaddr { unsigned char x_1_4_1; unsigned char x_1_4_2; BOOL x_1_4_3[14]; } x_2_3_1; struct sockaddr_in { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; struct in_addr { unsigned int x_4_5_1; } x_2_4_4; BOOL x_2_4_5[8]; } x_2_3_2; struct sockaddr_in6 { unsigned char x_3_4_1; unsigned char x_3_4_2; unsigned short x_3_4_3; unsigned int x_3_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_3_4_5; unsigned int x_3_4_6; } x_2_3_3; } x_2_2_2; } x_9_1_2; } x9; }*)shouldOpenSessionWithContext:(struct coap_context_t { unsigned short x1[6]; struct coap_resource_t {} *x2; struct coap_resource_t {} *x3; struct coap_async_state_t {} *x4; unsigned long long x5; struct coap_queue_t {} *x6; struct coap_endpoint_t {} *x7; struct coap_session_t {} *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); void *x19; char *x20; unsigned long long x21; char *x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; void *x29; }*)arg1;

@end
