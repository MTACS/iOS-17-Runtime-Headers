
@interface _UITextLayoutFragmentView : UIView <_UIMutableTextLayoutFragmentView> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clipFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clipRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _containerOrigin;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    NSTextLayoutFragment * _layoutFragment;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clipFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clipRect;
@property (nonatomic) struct CGPoint { double x1; double x2; } containerOrigin;
@property (nonatomic) struct CGSize { double x1; double x2; } containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSTextLayoutFragment *layoutFragment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateGeometry;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (struct CGPoint { double x1; double x2; })containerOrigin;
- (struct CGSize { double x1; double x2; })containerSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)enumerateTextAttachmentViewsUsingBlock:(id /* block */)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithLayoutFragment:(id)arg1 containerOrigin:(struct CGPoint { double x1; double x2; })arg2 containerSize:(struct CGSize { double x1; double x2; })arg3 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)layoutFragment;
- (void)layoutSubviews;
- (void)performChanges:(id /* block */)arg1;
- (void)setClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContainerOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;

@end
