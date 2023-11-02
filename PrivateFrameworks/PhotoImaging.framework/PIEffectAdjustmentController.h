
@interface PIEffectAdjustmentController : PIAdjustmentController

@property (nonatomic) double intensity;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic) long long version;

+ (id)intensityKey;
+ (id)kindKey;
+ (id)versionKey;

- (double)intensity;
- (bool)isSettingEqual:(id)arg1 forKey:(id)arg2;
- (id)kind;
- (void)setIntensity:(double)arg1;
- (void)setKind:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
