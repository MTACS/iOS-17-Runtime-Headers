
@interface MKTransitItemIncidentView : UIView <MKTransitItemIncidentView> {
    MKTransitIncidentItemCellBackgroundView * _backgroundView;
    NSLayoutConstraint * _bottomToBackgroundConstraint;
    double  _bottomToBackgroundOffset;
    NSLayoutConstraint * _bottomToLabelConstraint;
    NSArray * _constraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIImageView * _incidentIconImageView;
    bool  _incidentIsBlocking;
    _MKUILabel * _lastUpdatedLabel;
    bool  _needsConstraintsRebuild;
    bool  _padBottom;
    _MKUILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelToTopConstraint;
    NSLayoutConstraint * _titleToLastUpdatedLabelConstraint;
    bool  _useCondensedWidthLayout;
}

@property (nonatomic) long long cellPosition;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool padBottom;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_blockingImage;
- (void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(bool)arg4 shouldShowImage:(bool)arg5 inSiri:(bool)arg6;
- (void)_contentSizeCategoryDidChange;
- (id)_nonBlockingImage;
- (void)_updateBottomConstraintWithOffset:(double)arg1;
- (void)_updateConstraintValues;
- (long long)cellPosition;
- (void)configureViews;
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(bool)arg3 inSiri:(bool)arg4;
- (void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(bool)arg4 inSiri:(bool)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)padBottom;
- (void)rebuildConstraints;
- (void)setCellPosition:(long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPadBottom:(bool)arg1;
- (void)updateConstraints;

@end
