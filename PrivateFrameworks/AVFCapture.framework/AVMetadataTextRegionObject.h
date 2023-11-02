
@interface AVMetadataTextRegionObject : AVMetadataObject {
    float  _angularOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _angularOffsetBounds;
    float  _confidence;
    long long  _regionID;
}

@property (readonly) float angularOffset;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } angularOffsetBounds;
@property (readonly) float confidence;
@property (readonly) long long regionID;

+ (id)textRegionObjectWithDictionary:(id)arg1 input:(id)arg2;

- (float)angularOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })angularOffsetBounds;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initTextRegionObjectWithDictionary:(id)arg1 input:(id)arg2;
- (long long)regionID;

@end
