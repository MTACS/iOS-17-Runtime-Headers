
@interface PUImageTextAttachment : NSTextAttachment {
    UIImageView * _imageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    _PUImageTextAttachmentViewProvider * _viewProvider;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4;
- (id)imageView;
- (id)initWithImageView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })size;
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;

@end
