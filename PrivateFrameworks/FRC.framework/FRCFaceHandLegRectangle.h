
@interface FRCFaceHandLegRectangle : NSObject {
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
    unsigned long long  _category;
    NSNumber * _roll;
    NSNumber * _yaw;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) unsigned long long category;
@property (nonatomic, copy) NSNumber *roll;
@property (nonatomic, copy) NSNumber *yaw;

+ (id)animalFaceRectangleWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bodyRectangleWithCenter:(struct CGPoint { double x1; double x2; })arg1 tip:(struct CGPoint { double x1; double x2; })arg2 category:(unsigned long long)arg3 frameAspectRatio:(float)arg4;
+ (id)faceRectangleWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 roll:(id)arg2 yaw:(id)arg3;
+ (id)handRectangleWithObservation:(id)arg1;
+ (id)humanRectangleWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (unsigned long long)category;
- (id)roll;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setRoll:(id)arg1;
- (void)setYaw:(id)arg1;
- (id)yaw;

@end
