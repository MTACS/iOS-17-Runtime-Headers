
@interface HULayeredContentEffect : NSObject {
    UIColor * _tintColor;
    UIVibrancyEffect * _vibrancyEffect;
}

@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UIVibrancyEffect *vibrancyEffect;

+ (id)contentWithTintColor:(id)arg1;
+ (id)contentWithVibrancyEffect:(id)arg1;

- (void).cxx_destruct;
- (void)setTintColor:(id)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (id)tintColor;
- (id)vibrancyEffect;

@end
