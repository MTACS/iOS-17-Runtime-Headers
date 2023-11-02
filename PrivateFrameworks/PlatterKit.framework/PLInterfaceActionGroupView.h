
@interface PLInterfaceActionGroupView : UIView <MTVisualStylingProviderObservingPrivate, MTVisualStylingRequiring> {
    bool  _actionsDirty;
    UIInterfaceActionGroupView * _actionsGroupView;
    NSMutableDictionary * _categoriesToProviders;
    double  _cornerRadius;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_newInterfaceActionGroupViewWithActions:(id)arg1;
- (void)_updateStylingOfInterfaceActionGroupView:(id)arg1;
- (id)actions;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (id)requiredVisualStyleCategories;
- (void)setActions:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
