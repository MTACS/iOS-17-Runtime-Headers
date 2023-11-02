
@interface GEORequestCounterCacheResults : NSObject <GEORequestCounterCacheResults, GEOXPCSerializable> {
    NSString * _appId;
    unsigned int  _cacheExpiredCount;
    unsigned int  _cacheHitCount;
    unsigned int  _cacheMissCount;
    NSDate * _endTime;
    int  _requestKindRaw;
    NSDate * _startTime;
}

@property (nonatomic, readonly) NSString *appId;
@property (nonatomic, retain) NSString *appId;
@property (nonatomic, readonly) unsigned int cacheExpiredCount;
@property (nonatomic) unsigned int cacheExpiredCount;
@property (nonatomic, readonly) unsigned int cacheHitCount;
@property (nonatomic) unsigned int cacheHitCount;
@property (nonatomic, readonly) unsigned int cacheMissCount;
@property (nonatomic) unsigned int cacheMissCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) int requestKindRaw;
@property (nonatomic, readonly) int requestType;
@property (nonatomic, retain) NSDate *startTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDateInterval *timeRange;

- (void).cxx_destruct;
- (id)appId;
- (unsigned int)cacheExpiredCount;
- (unsigned int)cacheHitCount;
- (unsigned int)cacheMissCount;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)endTime;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (int)requestKindRaw;
- (int)requestType;
- (void)setAppId:(id)arg1;
- (void)setCacheExpiredCount:(unsigned int)arg1;
- (void)setCacheHitCount:(unsigned int)arg1;
- (void)setCacheMissCount:(unsigned int)arg1;
- (void)setEndTime:(id)arg1;
- (void)setRequestKindRaw:(int)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (id)timeRange;

@end
