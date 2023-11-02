
@interface _HKStackedBarSegment : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    unsigned long long  _roundedCorners;
    bool  _shouldSeparateFromAdjacentSegments;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic) unsigned long long roundedCorners;
@property (nonatomic) bool shouldSeparateFromAdjacentSegments;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (unsigned long long)roundedCorners;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRoundedCorners:(unsigned long long)arg1;
- (void)setShouldSeparateFromAdjacentSegments:(bool)arg1;
- (bool)shouldSeparateFromAdjacentSegments;

@end
