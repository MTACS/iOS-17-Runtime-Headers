
@interface HKSimulatedWatchNotificationQuickLookView : UIView {
    NSString * _detailLabelText;
    UIImage * _iconImage;
    UIImageView * _quickLookIconView;
    UIView * _quickLookSubtitleContainer;
    UILabel * _quickLookSubtitleLabel;
    UIView * _quickLookTitleContainer;
    UILabel * _quickLookTitleLabel;
    UIColor * _tintColor;
    NSString * _titleLabelText;
}

@property (nonatomic, retain) NSString *detailLabelText;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) UIImageView *quickLookIconView;
@property (nonatomic, retain) UIView *quickLookSubtitleContainer;
@property (nonatomic, retain) UILabel *quickLookSubtitleLabel;
@property (nonatomic, retain) UIView *quickLookTitleContainer;
@property (nonatomic, retain) UILabel *quickLookTitleLabel;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) NSString *titleLabelText;

- (void).cxx_destruct;
- (void)_layoutQuickLook;
- (void)_setUpSubviews;
- (id)detailLabelText;
- (id)iconImage;
- (id)initWithIconImage:(id)arg1 titleText:(id)arg2 detailText:(id)arg3 tintColor:(id)arg4;
- (id)quickLookIconView;
- (id)quickLookSubtitleContainer;
- (id)quickLookSubtitleLabel;
- (id)quickLookTitleContainer;
- (id)quickLookTitleLabel;
- (void)setDetailLabelText:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setQuickLookIconView:(id)arg1;
- (void)setQuickLookSubtitleContainer:(id)arg1;
- (void)setQuickLookSubtitleLabel:(id)arg1;
- (void)setQuickLookTitleContainer:(id)arg1;
- (void)setQuickLookTitleLabel:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitleLabelText:(id)arg1;
- (id)tintColor;
- (id)titleLabelText;

@end
