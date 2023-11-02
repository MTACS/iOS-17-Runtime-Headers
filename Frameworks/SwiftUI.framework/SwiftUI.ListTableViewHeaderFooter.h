
@interface SwiftUI.ListTableViewHeaderFooter : UITableViewHeaderFooterView {
    void configuration;
    void host;
    void isDisplaying;
    void outlineRootSeed;
    void viewListID;
}

@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isAccessibilityElement;
- (void)prepareForReuse;
- (void)setIsAccessibilityElement:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
