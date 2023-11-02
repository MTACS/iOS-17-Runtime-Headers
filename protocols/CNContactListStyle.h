
@protocol CNContactListStyle

@required

- (UIColor *)bannerTitleTextColor;
- (UIColor *)cellBackgroundColor;
- (UIColor *)cellBackgroundSelectedColor;
- (UIColor *)cellBlueSelectionSecondaryTextColor;
- (bool)cellIsOpaque;
- (bool)cellIsVibrant;
- (UIColor *)cellNameTextColor;
- (UIFont *)cellNameTextEmphasisedFont;
- (UIFont *)cellNameTextFont;
- (UIColor *)cellNameTextHighlightedColor;
- (UIColor *)cellNameTextHighlightedLightColor;
- (UIColor *)cellSearchBackgroundColor;
- (UIColor *)cellSearchResultTextColor;
- (UIColor *)cellSearchResultTextDisabledColor;
- (UIColor *)headerBackgroundColor;
- (UIColor *)headerIndexTextColor;
- (bool)navigationBarIsTranslucent;
- (long long)navigationBarStyle;
- (UIColor *)searchBarBackgroundColor;
- (bool)searchBarIsTranslucent;
- (long long)searchBarKeyboardAppearance;
- (UIColor *)searchBarPlaceholderTextColor;
- (UIColor *)searchBarPlaceholderTextDisabledColor;
- (long long)searchBarStyle;
- (UIColor *)searchBarTextColor;
- (UIColor *)searchBarTextDisabledColor;
- (UIColor *)tableBackgroundColor;
- (UIColor *)tableBackgroundFilteredColor;
- (bool)tableIsOpaque;
- (unsigned long long)tableNoContactsAvailableStyle;
- (UIColor *)tableSectionIndexBackgroundColor;
- (UIColor *)tableSeparatorColor;
- (long long)tableSeparatorOverlayBlendMode;
- (long long)tableSeparatorStyle;
- (bool)usesInsetPlatterStyle;

@end
