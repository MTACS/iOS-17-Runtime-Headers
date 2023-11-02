
@protocol DKDiagnostic_Internal <DKDiagnostic>

@required

- (bool)isCancelled;
- (bool)isSetup;
- (NSProgress *)progress;
- (void)setCancelled:(bool)arg1;
- (void)setProgress:(NSProgress *)arg1;
- (void)setSetup:(bool)arg1;

@end
