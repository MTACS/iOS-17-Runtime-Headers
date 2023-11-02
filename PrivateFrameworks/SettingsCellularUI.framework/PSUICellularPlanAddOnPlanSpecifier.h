
@interface PSUICellularPlanAddOnPlanSpecifier : PSSpecifier {
    UIButton * _addButton;
    CTDisplayPlan * _displayPlan;
    UILabel * _nameLabel;
    UILabel * _numberLabel;
    id  _target;
}

@property (nonatomic, readonly) UIButton *addButton;

- (void).cxx_destruct;
- (id)addButton;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 displayPlan:(id)arg3;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

@end
