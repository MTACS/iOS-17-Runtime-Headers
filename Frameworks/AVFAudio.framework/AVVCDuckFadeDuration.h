
@interface AVVCDuckFadeDuration : NSObject {
    NSNumber * _fadeIn;
    NSNumber * _fadeOut;
}

@property (nonatomic, retain) NSNumber *fadeIn;
@property (nonatomic, retain) NSNumber *fadeOut;

- (void).cxx_destruct;
- (id)description;
- (id)fadeIn;
- (id)fadeOut;
- (id)initWithFadeIn:(id)arg1 fadeOut:(id)arg2;
- (void)setFadeIn:(id)arg1;
- (void)setFadeOut:(id)arg1;

@end
