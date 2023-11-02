
@interface AVPlaybackSpeed : NSObject {
    NSString * _localizedName;
    NSString * _localizedNumericName;
    float  _rate;
    bool  _synthesized;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedNumericName;
@property (nonatomic, readonly) float rate;

+ (id)_rateFormattedAsString:(float)arg1 locale:(id)arg2;
+ (id)systemDefaultSpeeds;

- (void).cxx_destruct;
- (id)compactLocalizedName;
- (id)debugDescription;
- (id)description;
- (id)initWithRate:(float)arg1 localizedName:(id)arg2;
- (id)initWithRate:(float)arg1 localizedName:(id)arg2 synthesized:(bool)arg3;
- (id)internalDescription;
- (bool)isSynthesized;
- (id)localizedName;
- (id)localizedNumericName;
- (float)rate;

@end
