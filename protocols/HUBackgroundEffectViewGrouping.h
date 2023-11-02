
@protocol HUBackgroundEffectViewGrouping <NSObject>

@required

- (void)backgroundEffectAddCaptureDependent:(UIVisualEffectView *)arg1 forBackgroundEffectIdentifier:(NSString *)arg2;
- (void)backgroundEffectRemoveCaptureDependent:(UIVisualEffectView *)arg1 forBackgroundEffectIdentifier:(NSString *)arg2;
- (bool)isEqual:(id)arg1;

@end
