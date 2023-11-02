
@interface GEOConfigSetExpiringKeyRequest : GEOXPCRequest <GEOXPCRequest> {
    NSString * _expireOSVersion;
    NSDate * _expireTime;
    unsigned long long  _keyOptions;
    NSString * _keyString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *expireOSVersion;
@property (nonatomic, retain) NSDate *expireTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long keyOptions;
@property (nonatomic, retain) NSString *keyString;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)expireOSVersion;
- (id)expireTime;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)keyOptions;
- (id)keyString;
- (unsigned long long)reply;
- (void)setExpireOSVersion:(id)arg1;
- (void)setExpireTime:(id)arg1;
- (void)setKeyOptions:(unsigned long long)arg1;
- (void)setKeyString:(id)arg1;

@end
