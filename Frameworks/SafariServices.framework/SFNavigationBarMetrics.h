
@interface SFNavigationBarMetrics : NSObject {
    double  _accessibilityImageScale;
    UIImageSymbolConfiguration * _accessoryImageSymbolConfiguration;
    double  _defaultBarHeight;
    UIFont * _defaultBoldFont;
    UIFont * _defaultLabelFont;
    double  _distanceFromLabelBaselineToURLOutlineBottom;
    UIImageSymbolConfiguration * _mediumButtonImageSymbolConfiguration;
    double  _minimumBarHeight;
    UIFont * _narrowEditingLabelFont;
    double  _narrowEditingScaleFactor;
    bool  _narrowEditingScaleFactorNeedsUpdate;
    double  _safariBarHeight;
    double  _safariSquishHeightQuantizationOffset;
    double  _safariViewControllerBarHeight;
    double  _safariViewControllerSquishHeightQuantizationOffset;
    UIImageSymbolConfiguration * _squishedAccessoryImageSymbolConfiguration;
    double  _statusBarHeight;
    UITraitCollection * _traitCollectionForButtonMetrics;
    UITraitCollection * _traitCollectionForFontMetrics;
    double  _urlContainerTop;
    double  _urlLabelAccessoryItemSquishedVerticalOffset;
    double  _urlLabelAccessoryLockItemVerticalOffset;
    double  _urlLabelVerticalOffset;
    double  _urlOutlineCornerRadius;
    double  _urlOutlineHeight;
    bool  _usesNavigationBarHeightForSheetPresentation;
}

- (void).cxx_destruct;
- (id)init;

@end
