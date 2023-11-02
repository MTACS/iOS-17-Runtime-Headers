
@interface FCUIOnboardingStackedNotificationView : UIView {
    NSString * _assetImageName;
    UIView * _assetView;
    MTMaterialView * _backgroundMaterialView;
    UIView * _line1TextView;
    UIView * _line2TextView;
    MTVisualStylingProvider * _visualStylingProvider;
}

- (void).cxx_destruct;
- (void)_configureViewIfNecessary;
- (id)initWithBackgroundColor:(id)arg1 assetImageName:(id)arg2;
- (void)layoutSubviews;

@end
