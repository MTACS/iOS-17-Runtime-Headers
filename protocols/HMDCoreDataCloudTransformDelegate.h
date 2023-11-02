
@protocol HMDCoreDataCloudTransformDelegate <NSObject>

@required

- (bool)cloudTransform:(HMDCoreDataCloudTransform *)arg1 isPermittedForHomeWithModelID:(NSUUID *)arg2 isImport:(bool)arg3;

@end
