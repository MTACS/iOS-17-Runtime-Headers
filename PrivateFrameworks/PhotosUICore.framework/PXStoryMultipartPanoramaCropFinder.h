
@interface PXStoryMultipartPanoramaCropFinder : NSObject {
    long long  _axis;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _bestRects;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _possibleRects;
    long long  _rectCapacity;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceContentsRect;
    NSArray * _saliencyAreas;
}

@property (nonatomic, readonly) NSArray *saliencyAreas;

- (void).cxx_destruct;
- (void)_enumeratePossibleContentsRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(long long)arg2 usingBlock:(id /* block */)arg3;
- (long long)_findBestRectsWithMaximumCount:(long long)arg1 aspectRatio:(double)arg2;
- (double)_scoreContentsRects:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(long long)arg2;
- (id)bestCropContentsRectsWithAspectRatio:(double)arg1 axis:(long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithSaliencyAreas:(id)arg1;
- (id)saliencyAreas;

@end
