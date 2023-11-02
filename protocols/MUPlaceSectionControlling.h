
@protocol MUPlaceSectionControlling <NSObject, MUInfoCardSectionAnalyticsDelegate>

@required

- (<MUInfoCardAnalyticsDelegate> *)analyticsDelegate;
- (NSArray *)draggableContent;
- (bool)hasContent;
- (bool)isActive;
- (MUPlaceSectionFooterViewModel *)sectionFooterViewModel;
- (MUPlaceSectionHeaderViewModel *)sectionHeaderViewModel;
- (UIView *)sectionView;
- (NSArray *)sectionViews;
- (void)setActive:(bool)arg1;
- (void)setAnalyticsDelegate:(id <MUInfoCardAnalyticsDelegate>)arg1;
- (void)setSubmissionStatus:(MUPlaceCallToActionAppearance *)arg1;
- (MUPlaceCallToActionAppearance *)submissionStatus;

@optional

- (UIViewController *)sectionViewController;
- (void)updateForActionRowInfoChange;
- (void)updateForAttributionChange;

@end
