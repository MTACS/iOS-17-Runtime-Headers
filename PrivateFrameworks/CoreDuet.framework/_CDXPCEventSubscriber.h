
@interface _CDXPCEventSubscriber : NSObject {
    NSObject<OS_xpc_object> * _descriptor;
    NSString * _streamName;
    unsigned long long  _token;
    unsigned int  _uid;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *descriptor;
@property (nonatomic, readonly) NSString *streamName;
@property (nonatomic, readonly) unsigned long long token;
@property (nonatomic, readonly) unsigned int uid;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)description;
- (id)descriptor;
- (unsigned long long)hash;
- (id)initWithToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned int)arg3 streamName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)streamName;
- (unsigned long long)token;
- (unsigned int)uid;

@end
