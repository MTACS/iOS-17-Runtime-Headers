
@interface UIKBNullEffect : NSObject <UIKBRenderEffect>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIKBGradient *gradient;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) bool renderUnder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesRGBColors;
@property (nonatomic) double weight;

+ (id)nullEffect;

- (struct CGColor { }*)CGColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gradient;
- (bool)isValid;
- (void)renderEffectWithRenderer:(id)arg1 traits:(id)arg2;
- (bool)renderUnder;
- (void)setWeight:(double)arg1;
- (bool)usesRGBColors;
- (double)weight;

@end
