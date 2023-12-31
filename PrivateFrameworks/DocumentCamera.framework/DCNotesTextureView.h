
@interface DCNotesTextureView : UIView {
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _phase;
}

@property (nonatomic, retain) UIImage *image;
@property struct CGSize { double x1; double x2; } phase;

- (void).cxx_destruct;
- (id)image;
- (struct CGSize { double x1; double x2; })phase;
- (void)setImage:(id)arg1;
- (void)setPhase:(struct CGSize { double x1; double x2; })arg1;

@end
