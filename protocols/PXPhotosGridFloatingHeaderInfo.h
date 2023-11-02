
@protocol PXPhotosGridFloatingHeaderInfo <NSObject>

@required

- (unsigned long long)floatingButtonActionType;
- (NSString *)floatingButtonTitle;
- (bool)floatingEnableOverview;
- (NSAttributedString *)floatingSummarySubtitle;
- (NSAttributedString *)floatingSummaryTitle;

@end
