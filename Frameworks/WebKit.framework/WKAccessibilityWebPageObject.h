
@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {
    NSData * _remoteTokenData;
}

@property (nonatomic, retain) NSData *remoteTokenData;

- (void)_accessibilityCategoryInstalled:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)init;
- (double)pageScale;
- (id)remoteTokenData;
- (void)setRemoteTokenData:(id)arg1;

@end
