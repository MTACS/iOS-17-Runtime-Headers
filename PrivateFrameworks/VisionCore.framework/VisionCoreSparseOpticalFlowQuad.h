
@interface VisionCoreSparseOpticalFlowQuad : NSObject <VisionCoreSparseOpticalFlowQuadrilateral> {
    NSUUID * _UUID;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
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
    int  _homographyGroupID;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topRight;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int homographyGroupID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;

- (void).cxx_destruct;
- (id)UUID;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct vector<__fp16, std::allocator<__fp16>> { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void**x1; void**x2; struct __compressed_pair<__fp16 *, std::allocator<__fp16>> { void**x_3_1_1; } x3; })generateGridKeypointsWithMaxKeypoints:(float)arg1 minGridFrequency:(int)arg2;
- (double)getEmptyDistanceBetweenCenters:(id)arg1;
- (int)homographyGroupID;
- (id)initWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomRight:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4 indentifier:(id)arg5;
- (id)initWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomRight:(struct CGPoint { double x1; double x2; })arg3 bottomLeft:(struct CGPoint { double x1; double x2; })arg4 indentifier:(id)arg5 homographyGroupID:(int)arg6;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;

@end
