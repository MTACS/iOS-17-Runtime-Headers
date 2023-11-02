
@interface HMDUnassociatedFaceCropModel : HMBModel

@property (retain) NSData *dataRepresentation;
@property (retain) NSDate *dateCreated;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBoundingBox;
@property (retain) NSData *faceBoundingBoxData;

+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)sentinelParentUUID;
+ (id)unassociatedFaceCropsBetweenDatesQueryWithIsAscending:(bool)arg1;

- (id)createFaceCrop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBox;
- (id)initWithFaceCrop:(id)arg1;
- (void)setFaceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
