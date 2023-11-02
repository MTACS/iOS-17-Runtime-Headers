
@protocol PXMutableProgressIndicatorAlertController

@required

- (double)delay;
- (bool)isInternalUIAllowed;
- (NSString *)label;
- (double)minimumDisplayDuration;
- (void)setDelay:(double)arg1;
- (void)setIsInternalUIAllowed:(bool)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setMinimumDisplayDuration:(double)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
