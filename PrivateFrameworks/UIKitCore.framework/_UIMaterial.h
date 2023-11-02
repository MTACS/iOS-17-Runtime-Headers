
@interface _UIMaterial : NSObject {
    NSArray * _backgroundEffects;
    NSArray * _contentEffects;
    bool  _vibrant;
}

@property (nonatomic, readonly) NSArray *backgroundEffects;
@property (nonatomic, readonly) NSArray *contentEffects;
@property (getter=isVibrant, nonatomic, readonly) bool vibrant;

+ (id)defaultMaterialMapping;
+ (id)materialForSystemColorName:(id)arg1;
+ (id)materialMapping;
+ (id)vibrancyEffectWithA:(double)arg1 B:(double)arg2 C:(double)arg3 D:(double)arg4 E:(double)arg5 F:(double)arg6;
+ (id)watchMaterialMapping;
+ (id)xrOSMaterialMapping;

- (void).cxx_destruct;
- (id)backgroundEffects;
- (id)contentEffects;
- (id)description;
- (id)initWithBlur:(long long)arg1;
- (id)initWithVibrancy:(long long)arg1;
- (id)initWithVibrancy:(long long)arg1 forBlurEffectStyle:(long long)arg2;
- (id)initWithVibrantVisualEffect:(id)arg1;
- (id)initWithVisualEffect:(id)arg1;
- (bool)isVibrant;

@end
