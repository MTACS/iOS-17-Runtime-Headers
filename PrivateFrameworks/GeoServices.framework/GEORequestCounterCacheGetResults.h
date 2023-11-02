
@interface GEORequestCounterCacheGetResults : GEOXPCRequest <GEOXPCRequest> {
    NSString * _appId;
    NSDate * _endTime;
    unsigned long long  _mode;
    int  _requestKindRaw;
    NSDate * _startTime;
}

@property (nonatomic, retain) NSString *appId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) int requestKindRaw;
@property (nonatomic, retain) NSDate *startTime;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (id)appId;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)endTime;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)mode;
- (unsigned long long)reply;
- (int)requestKindRaw;
- (void)setAppId:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setRequestKindRaw:(int)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
