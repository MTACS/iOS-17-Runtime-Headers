
@interface CNCardSharedProfileCell : CNPropertyCell <CNCardSharedProfileCellViewDelegate> {
    <CNCardSharedProfileCellActionDelegate> * _actionDelegate;
    CNContact * _contact;
    CNSharedProfileStateOracle * _sharedProfileStateOracle;
    CNCardSharedProfileCellView * _snapView;
}

@property (nonatomic) <CNCardSharedProfileCellActionDelegate> *actionDelegate;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (nonatomic, retain) CNCardSharedProfileCellView *snapView;

+ (bool)shouldIndentWhileEditing;

- (void).cxx_destruct;
- (id)actionDelegate;
- (bool)allowsCellSelection;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)contact;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setActionDelegate:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setSharedProfileStateOracle:(id)arg1;
- (void)setSnapView:(id)arg1;
- (id)sharedProfileStateOracle;
- (id)snapView;
- (void)updateConstraints;
- (void)updateViewsWithCardGroupItem:(id)arg1;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;
- (void)viewDidSelectDisplayPreference:(long long)arg1;
- (void)viewDidSelectFallbackAction;

@end
