
@interface ICSTravelDuration : ICSProperty

@property (nonatomic, retain) ICSDuration *duration;
@property (nonatomic, retain) NSString *transparency;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;
- (bool)alwaysHasParametersToSerialize;
- (id)duration;
- (void)setDuration:(id)arg1;
- (void)setTransparency:(id)arg1;
- (id)transparency;

@end
