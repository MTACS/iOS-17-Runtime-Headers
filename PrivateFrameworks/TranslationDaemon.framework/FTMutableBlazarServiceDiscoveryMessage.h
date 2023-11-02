
@interface FTMutableBlazarServiceDiscoveryMessage : FTBlazarServiceDiscoveryMessage

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (nonatomic, copy) FTServiceDiscoveryRequest *session_messageAsFTServiceDiscoveryRequest;
@property (nonatomic, copy) FTServiceDiscoveryResponse *session_messageAsFTServiceDiscoveryResponse;
@property (nonatomic) long long session_message_type;

+ (Class)session_message_mutableClassForType:(long long)arg1;
+ (long long)session_message_typeForMutableObject:(id)arg1;
+ (long long)session_message_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_messageAsFTServiceDiscoveryRequest;
- (id)session_messageAsFTServiceDiscoveryResponse;
- (long long)session_message_type;
- (void)setSession_message:(id)arg1;
- (void)setSession_messageAsFTServiceDiscoveryRequest:(id)arg1;
- (void)setSession_messageAsFTServiceDiscoveryResponse:(id)arg1;
- (void)setSession_message_type:(long long)arg1;

@end
