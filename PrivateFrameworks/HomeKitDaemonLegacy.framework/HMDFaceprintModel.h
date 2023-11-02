
@interface HMDFaceprintModel : HMBModel

@property (copy) NSData *data;
@property (retain) HMBModelReference *faceCrop;
@property (copy) NSUUID *modelUUID;

+ (bool)hmbExcludeFromCloudStorage;
+ (id)hmbProperties;

- (id)createFaceprint;
- (id)initWithFaceprint:(id)arg1;

@end
