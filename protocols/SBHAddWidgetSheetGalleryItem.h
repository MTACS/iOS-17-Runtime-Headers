
@protocol SBHAddWidgetSheetGalleryItem <NSObject>

@required

- (UIColor *)accentColor;
- (UIColor *)backgroundColor;
- (UIColor *)mostInterestingColor;
- (NSString *)sbh_appName;
- (bool)sbh_canBeAddedToStack;
- (unsigned long long)sbh_disfavoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)arg1;
- (unsigned long long)sbh_favoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)arg1;
- (NSString *)sbh_galleryItemIdentifier;
- (bool)sbh_isLinkedOnOrAfter:(unsigned long long)arg1;
- (unsigned long long)sbh_supportedSizeClasses;
- (bool)sbh_supportsRemovableBackground;
- (bool)sbh_supportsRemovableBackgroundOrAccessoryFamilies;
- (NSString *)sbh_widgetDescription;
- (NSString *)sbh_widgetName;

@end
