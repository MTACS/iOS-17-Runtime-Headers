
@protocol OKPresentationReadinessPrivate <NSObject>

@required

- (void)becomeReady;
- (void)readinessDidChange:(bool)arg1;
- (void)resignReady;
- (bool)supportsReadiness;

@end
