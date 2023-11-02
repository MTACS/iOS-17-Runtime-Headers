
@interface _UISearchTokenAttachment : NSTextAttachment {
    UISearchToken * _token;
    _UISearchTokenAttachmentViewProvider * _viewProvider;
}

@property (nonatomic, readonly) _UISearchTokenAttachmentViewProvider *_viewProvider;
@property (nonatomic, readonly) UISearchToken *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_viewProvider;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)initWithToken:(id)arg1;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)token;
- (bool)usesTextAttachmentView;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;

@end
