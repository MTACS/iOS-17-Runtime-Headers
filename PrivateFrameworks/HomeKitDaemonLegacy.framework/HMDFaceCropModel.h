
@interface HMDFaceCropModel : HMBModel

@property (retain) NSData *dataRepresentation;
@property (retain) NSDate *dateCreated;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBoundingBox;
@property (retain) NSData *faceBoundingBoxData;
@property (retain) HMBModelCloudReference *person;
@property long long source;
@property (retain) NSNumber *sourceField;
@property (retain) NSUUID *unassociatedFaceCropUUID;

+ (id)faceCropsForPersonQuery;
+ (id)faceCropsWithUnassociatedFaceCropUUIDQuery;
+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)sentinelParentUUID;

- (id)createPersonFaceCrop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBox;
- (id)initWithPersonFaceCrop:(id)arg1;
- (void)setFaceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end
