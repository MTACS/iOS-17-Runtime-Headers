
@interface CRVCQuad : NSObject <VisionCoreSparseOpticalFlowQuadrilateral> {
    NSUUID * _UUID;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomLeft;
    struct CGPoint { 
        double x; 
        double y; 
    }  _bottomRight;
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

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int homographyGroupID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;

- (void).cxx_destruct;
- (id)UUID;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)homographyGroupID;
- (id)initWithImageSpaceQuad:(id)arg1 uuid:(id)arg2;
- (id)initWithImageSpaceQuad:(id)arg1 uuid:(id)arg2 homographyGroupID:(int)arg3;
- (id)quadAfterScaling:(float)arg1;
- (void)setHomographyGroupID:(int)arg1;
- (void)setUUID:(id)arg1;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (void)updateWithQuad:(id)arg1;

@end
