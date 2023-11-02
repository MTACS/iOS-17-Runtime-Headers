
@interface PKStrokeSelectionImageConfig : NSObject <NSCopying> {
    bool  _highlighted;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageViewBounds;
    bool  _invertedColors;
    bool  _rotated;
    double  _scale;
    bool  _sixChannel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokeBounds;
}

@property (nonatomic, readonly) bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageViewBounds;
@property (nonatomic, readonly) bool invertedColors;
@property (nonatomic, readonly) bool rotated;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) bool sixChannel;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } strokeBounds;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)highlighted;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewBounds;
- (id)initWithStrokeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 invertedColors:(bool)arg5 rotated:(bool)arg6 sixChannel:(bool)arg7 highlighted:(bool)arg8;
- (bool)invertedColors;
- (bool)isEqual:(id)arg1;
- (bool)rotated;
- (double)scale;
- (bool)sixChannel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeBounds;

@end
