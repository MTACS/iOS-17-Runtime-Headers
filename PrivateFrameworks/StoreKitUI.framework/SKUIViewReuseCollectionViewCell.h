
@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell {
    NSArray * _allExistingViews;
    NSMapTable * _allViewTextProperties;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    SKUIViewReusePool * _viewPool;
}

@property (nonatomic, readonly) NSArray *allExistingViews;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;

- (void).cxx_destruct;
- (id)allExistingViews;
- (void)applyLayoutAttributes:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)existingViewForIndex:(long long)arg1;
- (id)existingViewsForReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)modifyUsingBlock:(id /* block */)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)textPropertiesForView:(id)arg1;

@end