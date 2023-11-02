
@interface VUIDocumentUIConfigurationFormSheet : VUIDocumentUIConfigurationModal {
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    bool  _prefersGrabberVisible;
    bool  _tapDismissable;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic) bool prefersGrabberVisible;
@property (getter=isTapDismissable, nonatomic) bool tapDismissable;

- (bool)isTapDismissable;
- (struct CGSize { double x1; double x2; })preferredSize;
- (bool)prefersGrabberVisible;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrefersGrabberVisible:(bool)arg1;
- (void)setTapDismissable:(bool)arg1;

@end
