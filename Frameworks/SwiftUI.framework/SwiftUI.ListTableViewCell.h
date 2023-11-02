
@interface SwiftUI.ListTableViewCell : UITableViewCell {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cellConfiguration;
    void delegate;
    void disclosureIndent;
    void focusItem;
    void hasDragItemsPreference;
    void hasItemProviderTrait;
    void host;
    void isDisplaying;
    void outlineRootSeed;
    void selectionBehavior;
    void separatorConfiguration;
    void viewListID;
}

@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isAccessibilityElement;
- (void)layoutMarginsDidChange;
- (void)prepareForReuse;
- (void)setIsAccessibilityElement:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
