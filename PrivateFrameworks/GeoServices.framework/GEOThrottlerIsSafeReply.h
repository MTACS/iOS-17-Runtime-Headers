
@interface GEOThrottlerIsSafeReply : GEOXPCReply <GEOXPCReply> {
    int  _availableRequestCount;
    double  _nextSafeRequestTime;
    GEODataRequestThrottlerToken * _throttlerToken;
}

@property (nonatomic) int availableRequestCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double nextSafeRequestTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEODataRequestThrottlerToken *throttlerToken;

- (void).cxx_destruct;
- (int)availableRequestCount;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (double)nextSafeRequestTime;
- (void)setAvailableRequestCount:(int)arg1;
- (void)setNextSafeRequestTime:(double)arg1;
- (void)setThrottlerToken:(id)arg1;
- (id)throttlerToken;

@end
