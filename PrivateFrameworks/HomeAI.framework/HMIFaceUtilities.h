
@interface HMIFaceUtilities : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteFaceBoxFromPhotosFaceCropImageData:(id)arg1;
+ (id)croppedJpegDataFromFaceCrop:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBoxFromPhotosFaceCropData:(id)arg1;
+ (struct CGSize { double x1; double x2; })faceCropDimensionsFromFaceCrop:(id)arg1 error:(id*)arg2;
+ (id)faceObservationFromFaceprint:(id)arg1;
+ (id)faceObservationFromTorsoprint:(id)arg1;
+ (id)faceObservationsFromFaceprintsForClustering:(id)arg1;
+ (unsigned long long)faceprintAttributeDefaultRevision;
+ (unsigned long long)faceprintDefaultRevision;
+ (id)imageCreationOptions;
+ (bool)isValidFaceCrop:(id)arg1;
+ (id)logCategory;
+ (id)mergedPersonEventsFromEvents:(id)arg1;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;
+ (bool)saveFaceClassifications:(id)arg1 videoId:(id)arg2 fragmentId:(unsigned long long)arg3 frameId:(id)arg4 baseURL:(id)arg5 error:(id*)arg6;
+ (bool)serializeJSONObject:(id)arg1 url:(id)arg2 error:(id*)arg3;

@end
