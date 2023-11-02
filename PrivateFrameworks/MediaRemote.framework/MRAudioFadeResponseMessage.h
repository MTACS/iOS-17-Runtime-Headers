
@interface MRAudioFadeResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) long long fadeDuration;

- (long long)fadeDuration;
- (id)initWithFadeDuration:(long long)arg1 error:(id)arg2;
- (unsigned long long)type;

@end
