
@interface HAP2TLVThreadNetworkCredentials : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _channel;
    NSData * _extendedPanID;
    NSData * _masterKey;
    NSString * _networkName;
    HAPTLVUnsignedNumberValue * _panID;
    HAPTLVUnsignedNumberValue * _reattachPeriod;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *extendedPanID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *masterKey;
@property (nonatomic, retain) NSString *networkName;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *panID;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *reattachPeriod;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extendedPanID;
- (id)init;
- (id)initWithNetworkName:(id)arg1 channel:(id)arg2 panID:(id)arg3 extendedPanID:(id)arg4 masterKey:(id)arg5 reattachPeriod:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)masterKey;
- (id)networkName;
- (id)panID;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)reattachPeriod;
- (id)serializeWithError:(id*)arg1;
- (void)setChannel:(id)arg1;
- (void)setExtendedPanID:(id)arg1;
- (void)setMasterKey:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setPanID:(id)arg1;
- (void)setReattachPeriod:(id)arg1;

@end
