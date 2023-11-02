
@interface GEORequestCounterCacheAddEntry : GEOXPCRequest <GEOXPCRequest> {
    NSString * _appId;
    int  _requestKindRaw;
    unsigned char  _result;
    NSDate * _timestamp;
}

@property (nonatomic, retain) NSString *appId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int requestKindRaw;
@property (nonatomic) unsigned char result;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *timestamp;

+ (Class)replyClass;

- (void).cxx_destruct;
- (id)appId;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (int)requestKindRaw;
- (unsigned char)result;
- (void)setAppId:(id)arg1;
- (void)setRequestKindRaw:(int)arg1;
- (void)setResult:(unsigned char)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
