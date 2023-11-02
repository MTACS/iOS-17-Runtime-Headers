
@protocol PFCloudKitSerializerDelegate <NSObject>

@required

- (void)cloudKitSerializer:(PFCloudKitSerializer *)arg1 failedToUpdateRelationship:(PFMirroredRelationship *)arg2 withError:(NSError *)arg3;
- (NSURL *)cloudKitSerializer:(PFCloudKitSerializer *)arg1 safeSaveURLForAsset:(CKAsset *)arg2;

@end
