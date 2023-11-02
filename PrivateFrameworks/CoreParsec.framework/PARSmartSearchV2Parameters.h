
@interface PARSmartSearchV2Parameters : NSObject <NSSecureCoding> {
    bool  _enableCount;
    bool  _enabled;
    long long  _minCount;
    double  _paramA;
    double  _paramB;
    double  _paramC;
    double  _paramK;
    double  _paramM;
    double  _paramQ;
    double  _paramV;
    double  _windowBucket;
    long long  _zkwMinCount;
}

@property (nonatomic, readonly) bool enableCount;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) long long minCount;
@property (nonatomic, readonly) double paramA;
@property (nonatomic, readonly) double paramB;
@property (nonatomic, readonly) double paramC;
@property (nonatomic, readonly) double paramK;
@property (nonatomic, readonly) double paramM;
@property (nonatomic, readonly) double paramQ;
@property (nonatomic, readonly) double paramV;
@property (nonatomic, readonly) double windowBucket;
@property (nonatomic, readonly) long long zkwMinCount;

+ (bool)supportsSecureCoding;

- (bool)enableCount;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromBag:(id)arg1;
- (id)initFromEnabled:(bool)arg1 enableCount:(bool)arg2 minCount:(long long)arg3;
- (id)initFromEnabled:(bool)arg1 enableCount:(bool)arg2 minCount:(long long)arg3 zkwMinCount:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (long long)minCount;
- (double)paramA;
- (double)paramB;
- (double)paramC;
- (double)paramK;
- (double)paramM;
- (double)paramQ;
- (double)paramV;
- (double)windowBucket;
- (long long)zkwMinCount;

@end
