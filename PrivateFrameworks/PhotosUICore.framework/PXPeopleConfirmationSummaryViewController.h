
@interface PXPeopleConfirmationSummaryViewController : UIViewController {
    PXPeopleScalableAvatarView * _avatarView;
    <PXPeopleSummaryDelegate> * _delegate;
    NSLayoutConstraint * _labelSpacingConstraint;
    <PXPerson> * _person;
    UILabel * _summaryLabel;
}

@property (nonatomic, readonly) PXPeopleScalableAvatarView *avatarView;
@property (nonatomic, readonly) <PXPeopleSummaryDelegate> *delegate;
@property (nonatomic, readonly) NSLayoutConstraint *labelSpacingConstraint;
@property (nonatomic, readonly) <PXPerson> *person;
@property (nonatomic, readonly) UILabel *summaryLabel;

- (void).cxx_destruct;
- (void)_updateDynamicTypeSpacing;
- (id)avatarView;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)labelSpacingConstraint;
- (id)person;
- (id)summaryLabel;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
