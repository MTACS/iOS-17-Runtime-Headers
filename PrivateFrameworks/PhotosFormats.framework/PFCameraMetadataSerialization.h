
@interface PFCameraMetadataSerialization : NSObject

+ (id)deserializedMetadataFromCameraClientMetadata:(id)arg1 error:(id*)arg2;
+ (id)deserializedMetadataFromData:(id)arg1 error:(id*)arg2;
+ (id)deserializedMetadataFromPrivateClientMetadata:(id)arg1 error:(id*)arg2;
+ (id)serializedDataFromCameraClientMetadata:(id)arg1 error:(id*)arg2;
+ (id)serializedDataFromClientMetadata:(id)arg1 contactIDsInProximity:(id)arg2 sharedLibraryMode:(long long)arg3 error:(id*)arg4;
+ (id)serializedDataFromClientMetadata:(id)arg1 error:(id*)arg2;

@end
