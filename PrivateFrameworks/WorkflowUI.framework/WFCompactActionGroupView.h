
@interface WFCompactActionGroupView : UIStackView {
    NSArray * _actions;
    <WFCompactAppearanceProvider> * _appearanceProvider;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) <WFCompactAppearanceProvider> *appearanceProvider;

- (void).cxx_destruct;
- (id)actions;
- (id)appearanceProvider;
- (id)initWithActions:(id)arg1 appearanceProvider:(id)arg2;
- (void)layoutSubviews;
- (void)setActions:(id)arg1;
- (void)setAppearanceProvider:(id)arg1;

@end
