
@interface CUIPSDImageLayer : CUIPSDLayer {
    CUIImage * _image;
}

@property (nonatomic, readonly) struct CGImage { }*cgImageRef;

- (struct CGImage { }*)cgImageRef;
- (void)dealloc;
- (id)initWithCGImageRef:(struct CGImage { }*)arg1;

@end
