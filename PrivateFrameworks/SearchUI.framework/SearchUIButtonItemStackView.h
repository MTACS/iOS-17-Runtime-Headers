
@interface SearchUIButtonItemStackView : TLKStackView {
    SearchUIButtonItemFactory * _buttonItemFactory;
    NSMutableArray * _buttonItemViewControllers;
    UIColor * _overridenButtonColor;
    bool  _shouldReverseButtonOrder;
}

@property (nonatomic, retain) SearchUIButtonItemFactory *buttonItemFactory;
@property (nonatomic, retain) NSMutableArray *buttonItemViewControllers;
@property (nonatomic, retain) UIColor *overridenButtonColor;
@property (nonatomic) bool shouldReverseButtonOrder;

- (void).cxx_destruct;
- (id)buttonItemFactory;
- (id)buttonItemViewControllers;
- (id)init;
- (id)overridenButtonColor;
- (void)setButtonItemFactory:(id)arg1;
- (void)setButtonItemViewControllers:(id)arg1;
- (void)setOverridenButtonColor:(id)arg1;
- (void)setShouldReverseButtonOrder:(bool)arg1;
- (bool)shouldReverseButtonOrder;
- (void)updateWithButtonItems:(id)arg1 maxButtonItems:(unsigned long long)arg2 buttonItemViewType:(unsigned long long)arg3 rowModel:(id)arg4 feedbackDelegate:(id)arg5;

@end
