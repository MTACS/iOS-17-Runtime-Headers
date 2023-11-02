
@interface FAFamilyCircleCacheResponse : NSObject {
    NSDate * _cacheDate;
    FAFamilyCircle * _familyCircle;
    double  _maxAge;
    NSString * _serverTag;
}

@property (nonatomic, retain) NSDate *cacheDate;
@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, retain) FAFamilyCircle *familyCircle;
@property (nonatomic) double maxAge;
@property (nonatomic, copy) NSString *serverTag;

- (void).cxx_destruct;
- (bool)_isFamilyCircleFresh:(id)arg1;
- (id)cacheDate;
- (id)expiration;
- (id)familyCircle;
- (id)familyCircleIfFresh;
- (id)familyCircleValidatingAgeWithDate:(id)arg1;
- (id)initWithFamilyCircle:(id)arg1 serverTag:(id)arg2 cacheDate:(id)arg3 maxAge:(double)arg4;
- (bool)isFamilyCircleFresh;
- (double)maxAge;
- (id)serverTag;
- (void)setCacheDate:(id)arg1;
- (void)setFamilyCircle:(id)arg1;
- (void)setMaxAge:(double)arg1;
- (void)setServerTag:(id)arg1;

@end
