
@interface ShotflowDetection : NSObject {
    float  _area;
    float  _associatedX;
    float  _associatedY;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _box;
    float  _confidence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _defaultBox;
    int  _groupId;
    bool  _hasLabel;
    int  _label;
    int  _mergesCount;
    float  _petFaceScore;
    float  _pitchAngle;
    float  _rotationAngle;
    int  _scale;
    float  _yawAngle;
}

@property (nonatomic) float associatedX;
@property (nonatomic) float associatedY;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } box;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } boxCenter;
@property (nonatomic) float confidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } defaultBox;
@property (nonatomic, readonly) float distanceToDefaultBox;
@property (nonatomic) int groupId;
@property (nonatomic) bool hasLabel;
@property (nonatomic) int label;
@property (nonatomic) int mergesCount;
@property (nonatomic) float petFaceScore;
@property (nonatomic) float pitchAngle;
@property (nonatomic) float rotationAngle;
@property (nonatomic) int scale;
@property (nonatomic, readonly) float smartDistance;
@property (nonatomic) float yawAngle;

- (float)associatedX;
- (float)associatedY;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (struct CGPoint { double x1; double x2; })boxCenter;
- (float)confidence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultBox;
- (id)description;
- (float)distanceToDefaultBox;
- (int)groupId;
- (bool)hasLabel;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 hasLabel:(bool)arg7 label:(int)arg8;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 mergesCount:(int)arg7 hasLabel:(bool)arg8 label:(int)arg9;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 hasLabel:(bool)arg8 label:(int)arg9;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 hasLabel:(bool)arg8 label:(int)arg9 petFaceScore:(float)arg10 associatedX:(float)arg11 associatedY:(float)arg12;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 mergesCount:(int)arg8 hasLabel:(bool)arg9 label:(int)arg10;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 rotationAngle:(float)arg5 yawAngle:(float)arg6 pitchAngle:(float)arg7 mergesCount:(int)arg8 hasLabel:(bool)arg9 label:(int)arg10 petFaceScore:(float)arg11 associatedX:(float)arg12 associatedY:(float)arg13 groupId:(int)arg14;
- (float)intersectionOverArea:(id)arg1;
- (float)intersectionOverMinArea:(id)arg1;
- (bool)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;
- (bool)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;
- (int)label;
- (int)mergesCount;
- (float)overlap:(id)arg1;
- (float)petFaceScore;
- (float)pitchAngle;
- (float)rotationAngle;
- (int)scale;
- (void)setAssociatedX:(float)arg1;
- (void)setAssociatedY:(float)arg1;
- (void)setBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfidence:(float)arg1;
- (void)setDefaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGroupId:(int)arg1;
- (void)setHasLabel:(bool)arg1;
- (void)setLabel:(int)arg1;
- (void)setMergesCount:(int)arg1;
- (void)setPetFaceScore:(float)arg1;
- (void)setPitchAngle:(float)arg1;
- (void)setRotationAngle:(float)arg1;
- (void)setScale:(int)arg1;
- (void)setYawAngle:(float)arg1;
- (float)smartDistance;
- (float)yawAngle;

@end
