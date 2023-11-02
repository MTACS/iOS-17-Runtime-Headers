
@interface HMIMotionDetection : HMFObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    unsigned long long  _motionMode;
    float  _motionScore;
    NSArray * _motionVectors;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly) unsigned long long motionMode;
@property (readonly) float motionScore;
@property (readonly) NSArray *motionVectors;
@property (readonly) struct CGSize { double x1; double x2; } size;

+ (id)firstMotionDetectionInArray:(id)arg1 withMode:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)applyEventTypeAndCheckIfSubBoundingIsStatic:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 eventClass:(Class)arg2 confidence:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)classMotionScoreMap;
- (id)classPaddingMap;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 motionVectors:(id)arg3 motionScore:(float)arg4 motionMode:(unsigned long long)arg5;
- (unsigned long long)motionMode;
- (float)motionScore;
- (id)motionVectors;
- (float)scoreForSubBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 eventClass:(Class)arg2 confidence:(float)arg3;
- (struct CGSize { double x1; double x2; })size;

@end
