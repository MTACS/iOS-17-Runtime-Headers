
@interface BWInferenceDepthScalingConfiguration : NSObject {
    NSNumber * _NANValue;
    bool  _allowUpsampling;
    NSNumber * _clampMax;
    NSNumber * _clampMin;
    unsigned long long  _concurrencyWidth;
    bool  _flipX;
}

@property (nonatomic, readonly) NSNumber *NANValue;
@property (nonatomic, readonly) bool allowUpsampling;
@property (nonatomic, readonly) NSNumber *clampMax;
@property (nonatomic, readonly) NSNumber *clampMin;
@property (nonatomic, readonly) unsigned long long concurrencyWidth;
@property (nonatomic, readonly) bool flipX;

- (id)NANValue;
- (bool)allowUpsampling;
- (id)clampMax;
- (id)clampMin;
- (unsigned long long)concurrencyWidth;
- (void)dealloc;
- (bool)flipX;
- (id)initWithflipX:(bool)arg1 clampMin:(id)arg2 clampMax:(id)arg3 NANValue:(id)arg4 allowUpsampling:(bool)arg5 concurrencyWidth:(unsigned long long)arg6;

@end
