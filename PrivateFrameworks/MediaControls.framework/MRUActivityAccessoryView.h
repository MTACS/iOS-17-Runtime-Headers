
@interface MRUActivityAccessoryView : UIView <SBUISystemApertureAccessoryView> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    UIView * _contentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)contentView;
- (id)initWithContentView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)layoutSubviews;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forLayoutMode:(long long)arg2;

@end
