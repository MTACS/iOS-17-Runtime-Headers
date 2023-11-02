
@protocol TUVideoEffectsProvider <NSObject>

@required

- (NSArray *)availableVideoEffects;
- (TUVideoEffect *)currentVideoEffect;
- (void)setCurrentVideoEffect:(TUVideoEffect *)arg1;
- (UIImage *)thumbnailImageForVideoEffectName:(NSString *)arg1;

@end
