
@interface SKUIViewReuseView : UIView {
    NSArray * _allExistingViews;
    SKUIViewReusePool * _viewReusePool;
}

@property (nonatomic, readonly) NSArray *allExistingViews;

- (void).cxx_destruct;
- (id)allExistingViews;
- (void)dealloc;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)modifyUsingBlock:(id /* block */)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;

@end
