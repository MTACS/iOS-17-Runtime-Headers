
@interface ICActivityStreamDockView : UIView {
    void $__lazy_storage_$_avatarView;
    void $__lazy_storage_$_backgroundEffectView;
    void $__lazy_storage_$_baselineLayoutGuide;
    void $__lazy_storage_$_closeButton;
    void $__lazy_storage_$_colorBar;
    void $__lazy_storage_$_horizontalStack;
    void $__lazy_storage_$_showAllActivityButton;
    void $__lazy_storage_$_subtitleLabel;
    void $__lazy_storage_$_titleLabel;
    void $__lazy_storage_$_topBorderView;
    void $__lazy_storage_$_verticalStack;
    void buttonHeight;
    void closeButtonHeight;
    void colorBarHidden;
    void coordinator;
    void horizontalStackLeadingConstraint;
    void isDisplayedInCard;
    void margin;
    void object;
    void selection;
}

@property (nonatomic, readonly) double buttonHeight;
@property (nonatomic, readonly) double closeButtonHeight;
@property (nonatomic, readonly) double closeButtonImageHeight;
@property (nonatomic, readonly) <ICActivityStreamCoordinating> *coordinator;
@property (nonatomic, retain) NSLayoutConstraint *horizontalStackLeadingConstraint;
@property (nonatomic, readonly) bool isDisplayedInCard;
@property (nonatomic, readonly) double margin;
@property (nonatomic, retain) ICCloudSyncingObject *object;
@property (nonatomic, retain) ICActivityStreamSelection *selection;

- (void).cxx_destruct;
- (double)buttonHeight;
- (double)closeButtonHeight;
- (double)closeButtonImageHeight;
- (id)coordinator;
- (id)horizontalStackLeadingConstraint;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinator:(id)arg1 isDisplayedInCard:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayedInCard;
- (double)margin;
- (id)object;
- (id)selection;
- (void)setHorizontalStackLeadingConstraint:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)update;

@end
