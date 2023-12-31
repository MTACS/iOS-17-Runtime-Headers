
@interface GKiOSAppIconBrushShare : GKiOSAppIconBrush {
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } outputSize;

- (struct CGSize { double x1; double x2; })outputSize;
- (void)setOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;

@end
