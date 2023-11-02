
@interface AEGridOverlayLayoutInfo : NSObject <AETileLayoutInfo> {
    struct CGSize { 
        double width; 
        double height; 
    }  __gradientImageSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _gradientImageSize;

- (struct CGSize { double x1; double x2; })_gradientImageSize;
- (id)initWithGradientImageSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })tileSystemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;

@end
