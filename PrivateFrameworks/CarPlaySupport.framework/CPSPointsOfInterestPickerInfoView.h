
@interface CPSPointsOfInterestPickerInfoView : UIView <CPSActionButtonLayoutDelegate, CPSButtonDelegate, CPSLinearFocusProviding> {
    UIStackView * _bottomStackView;
    <CPSPointsOfInterestPickerInfoDelegate> * _delegate;
    UILabel * _detailsInformativeText;
    UILabel * _detailsSubtitle;
    UILabel * _detailsTitle;
    CPPointOfInterest * _model;
    CPSStyledTextButton * _primaryButton;
    CPSStyledTextButton * _secondaryButton;
    UIStackView * _topStackView;
}

@property (nonatomic, retain) UIStackView *bottomStackView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSPointsOfInterestPickerInfoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *detailsInformativeText;
@property (nonatomic, retain) UILabel *detailsSubtitle;
@property (nonatomic, retain) UILabel *detailsTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPPointOfInterest *model;
@property (nonatomic, retain) CPSStyledTextButton *primaryButton;
@property (nonatomic, retain) CPSStyledTextButton *secondaryButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIStackView *topStackView;
@property (nonatomic, readonly) bool useRightHandDriveFocusGuide;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (id)bottomStackView;
- (id)delegate;
- (id)detailsInformativeText;
- (id)detailsSubtitle;
- (id)detailsTitle;
- (void)didSelectButton:(id)arg1;
- (id)model;
- (id)primaryButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (id)secondaryButton;
- (void)setBottomStackView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailsInformativeText:(id)arg1;
- (void)setDetailsSubtitle:(id)arg1;
- (void)setDetailsTitle:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setTopStackView:(id)arg1;
- (void)setupViews;
- (id)topStackView;
- (void)updateWithModel:(id)arg1;

@end
