
@interface AXElementDetection : NSObject {
    float  _area;
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
    bool  _hasLabel;
    int  _label;
    NSString * _labelName;
    int  _mergesCount;
    int  _scale;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } box;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } boxCenter;
@property (nonatomic) float confidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } defaultBox;
@property (nonatomic, readonly) float distanceToDefaultBox;
@property (nonatomic) bool hasLabel;
@property (nonatomic) int label;
@property (nonatomic, retain) NSString *labelName;
@property (nonatomic) int mergesCount;
@property (nonatomic) int scale;
@property (nonatomic, readonly) float smartDistance;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })box;
- (struct CGPoint { double x1; double x2; })boxCenter;
- (float)confidence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultBox;
- (id)description;
- (float)distanceToDefaultBox;
- (bool)hasLabel;
- (float)iOa:(id)arg1;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 hasLabel:(bool)arg5 label:(int)arg6;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 hasLabel:(bool)arg5 label:(int)arg6 labelName:(id)arg7;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 mergesCount:(int)arg5;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 mergesCount:(int)arg5 hasLabel:(bool)arg6 label:(int)arg7;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 scale:(int)arg4 mergesCount:(int)arg5 hasLabel:(bool)arg6 label:(int)arg7 labelName:(id)arg8;
- (bool)isOverlappingLowMergeDet:(id)arg1 withOverlapThreshold:(float)arg2 withMergeCountDelta:(int)arg3;
- (bool)isOverlappingSmallFace:(id)arg1 withOverlapThreshold:(float)arg2 withSizeRatio:(float)arg3;
- (int)label;
- (id)labelName;
- (int)mergesCount;
- (float)overlap:(id)arg1;
- (int)scale;
- (void)setBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfidence:(float)arg1;
- (void)setDefaultBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasLabel:(bool)arg1;
- (void)setLabel:(int)arg1;
- (void)setLabelName:(id)arg1;
- (void)setMergesCount:(int)arg1;
- (void)setScale:(int)arg1;
- (float)smartDistance;

@end
