
@protocol APUIAppIconGridViewDelegate

@required

- (SBIcon *)appIconGridView:(APUIAppIconGridView *)arg1 iconForApplicationWithBundleIdentifier:(NSString *)arg2;
- (bool)appIconGridView:(APUIAppIconGridView *)arg1 launchAppFromIcon:(SBIcon *)arg2;
- (bool)appIconGridView:(APUIAppIconGridView *)arg1 shouldDisplayBadgeWithBundleIdentifier:(NSString *)arg2;

@end
