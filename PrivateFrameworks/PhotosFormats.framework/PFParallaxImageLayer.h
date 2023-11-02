
@interface PFParallaxImageLayer : PFParallaxLayer {
    struct __CVBuffer { } * _image;
}

@property (nonatomic, readonly) struct __CVBuffer { }*image;

- (void)dealloc;
- (id)fileExtension;
- (struct __CVBuffer { }*)image;
- (id)initWithImage:(struct __CVBuffer { }*)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zPosition:(double)arg3 identifier:(id)arg4;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;

@end
