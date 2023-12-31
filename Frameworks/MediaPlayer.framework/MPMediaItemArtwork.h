
@interface MPMediaItemArtwork : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _bounds;
    id /* block */  _requestHandler;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageCropRect;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageCropRect;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithBoundsSize:(struct CGSize { double x1; double x2; })arg1 requestHandler:(id /* block */)arg2;
- (id)initWithImage:(id)arg1;
- (id)jpegDataWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)pngDataWithSize:(struct CGSize { double x1; double x2; })arg1;

@end
