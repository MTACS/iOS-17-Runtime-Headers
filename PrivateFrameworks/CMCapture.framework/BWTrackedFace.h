
@interface BWTrackedFace : NSObject {
    id  _detectionID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _detectionRect;
    float  _distance;
    float  _size;
    float  _sizeToDistanceMultiplier;
    float  _trackingDistance;
    id  _trackingID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trackingRect;
}

@property (nonatomic, readonly) id detectionID;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } detectionRect;
@property (nonatomic, readonly) float distance;
@property (nonatomic, readonly) float size;
@property (nonatomic) float trackingDistance;
@property (nonatomic, retain) id trackingID;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackingRect;

- (void)dealloc;
- (id)detectionID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })detectionRect;
- (float)distance;
- (void)setDetectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrackingDistance:(float)arg1;
- (void)setTrackingID:(id)arg1;
- (void)setTrackingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)size;
- (float)trackingDistance;
- (id)trackingID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackingRect;

@end
