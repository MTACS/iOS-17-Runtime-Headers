
@interface VCPBoundingBox : NSObject {
    int  _classIndex;
    float  _confidence;
    float  _flag;
    int  _groupID;
    float  _maxX;
    float  _maxY;
    float  _minX;
    float  _minY;
    int  _trackID;
}

@property int classIndex;
@property float confidence;
@property float flag;
@property int groupID;
@property float maxX;
@property float maxY;
@property float minX;
@property float minY;
@property int trackID;

- (float)area;
- (int)classIndex;
- (float)computeIntersectionOverUnion:(id)arg1;
- (float)confidence;
- (int)extendBoxBy:(float)arg1 scaleX:(float)arg2 scaleY:(float)arg3;
- (float)flag;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCGRectWithClipWidth:(float)arg1 height:(float)arg2;
- (int)groupID;
- (id)initWithCenterAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;
- (id)initWithXYAndSize:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4 confidence:(float)arg5;
- (id)intersect:(id)arg1;
- (float)maxX;
- (float)maxY;
- (float)minX;
- (float)minY;
- (void)setClassIndex:(int)arg1;
- (void)setConfidence:(float)arg1;
- (void)setFlag:(float)arg1;
- (void)setGroupID:(int)arg1;
- (void)setMaxX:(float)arg1;
- (void)setMaxY:(float)arg1;
- (void)setMinX:(float)arg1;
- (void)setMinY:(float)arg1;
- (void)setTrackID:(int)arg1;
- (int)trackID;
- (id)union:(id)arg1;

@end
