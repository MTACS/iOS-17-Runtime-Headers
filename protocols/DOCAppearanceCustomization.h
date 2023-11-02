
@protocol DOCAppearanceCustomization <NSObject>

@required

- (DOCAppearance *)effectiveAppearance;
- (void)effectiveAppearanceDidChange:(DOCAppearance *)arg1;

@end
