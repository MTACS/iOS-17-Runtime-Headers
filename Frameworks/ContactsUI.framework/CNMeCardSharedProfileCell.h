
@interface CNMeCardSharedProfileCell : CNLabeledCell <CNContactSharedProfileSettingsActionDelegate> {
    CNMeCardSharedProfileCellContentView * _meCardSharedProfileContentView;
}

@property (nonatomic, retain) CNMeCardSharedProfileCellContentView *meCardSharedProfileContentView;

+ (bool)shouldIndentWhileEditing;

- (void).cxx_destruct;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)meCardSharedProfileContentView;
- (void)nicknameStoreDidChange;
- (void)performDefaultAction;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setMeCardSharedProfileContentView:(id)arg1;
- (void)setMeContact:(id)arg1;
- (void)setUpView;
- (void)sharedProfileSettingsDidUpdate;
- (bool)shouldPerformDefaultAction;
- (void)updateConstraints;
- (void)updateViews;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;

@end
