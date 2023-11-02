
@interface PKAlignedContentContainerView : UIView {
    struct { 
        unsigned int horizontalAlignment; 
        unsigned int verticalAlignment; 
    }  _alignment;
    UIView * _contentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) struct { unsigned int x1; unsigned int x2; } alignment;
@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (struct { unsigned int x1; unsigned int x2; })alignment;
- (id)contentView;
- (id)initWithContentView:(id)arg1 alignment:(struct { unsigned int x1; unsigned int x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)layoutSubviews;
- (void)setAlignment:(struct { unsigned int x1; unsigned int x2; })arg1;

@end
