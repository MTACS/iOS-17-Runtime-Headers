
@protocol AKFontChooserUserInterfaceItem <NSObject>

@required

- (UIFont *)convertFont:(UIFont *)arg1;
- (void)syncFontsToUI:(NSSet *)arg1;

@end
