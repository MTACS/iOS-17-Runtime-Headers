
@interface _UIIndexBarScrollAccessoryContainerAdapterView : UIView <UIScrollAccessory> {
    UIView<UIScrollAccessory> * _delegatedView;
}

@property (nonatomic) long long edge;
@property (nonatomic, readonly) bool overlay;
@property (nonatomic) UIScrollView *scrollView;

- (void).cxx_destruct;
- (long long)edge;
- (id)initWithContents:(id)arg1 delegatingToView:(id)arg2;
- (bool)overlay;
- (id)scrollView;
- (void)setEdge:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)update;

@end
