
@interface HMIFeedbackSubmitClipOperation : HMFOperation <HMFLogging> {
    NSData * _assetData;
    NSUUID * _cameraProfileUUID;
    NSUUID * _clipUUID;
    NSSet * _faceCrops;
    HMIFeedbackSession * _feedbackSession;
    NSDictionary * _serviceResult;
    NSMutableArray * _temporaryFileURLs;
}

@property (retain) NSData *assetData;
@property (readonly) NSUUID *cameraProfileUUID;
@property (readonly) NSUUID *clipUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSSet *faceCrops;
@property (readonly) HMIFeedbackSession *feedbackSession;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *serviceResult;
@property (readonly) Class superclass;
@property (readonly) NSMutableArray *temporaryFileURLs;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_attachEncryptedDataUsingKey:(id)arg1 toPayload:(id)arg2 error:(id*)arg3;
- (bool)_attachFaceCrops:(id)arg1 toPayload:(id)arg2 error:(id*)arg3;
- (id)_base64StringFromData:(id)arg1;
- (id)_createPayloadWithServiceResult:(id)arg1 error:(id*)arg2;
- (void)_downloadClipWithCameraProfileUUID:(id)arg1 clipUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_removeTemporaryFiles;
- (void)_requestPreSignedURLWithClipUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_stripAudioTrackAndFacesFromAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_submitClipWithCameraProfileUUID:(id)arg1 clipUUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_temporaryFileURLWithUUID:(id)arg1 extension:(id)arg2 error:(id*)arg3;
- (void)_uploadPayloadData:(id)arg1 uploadURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)assetData;
- (id)cameraProfileUUID;
- (id)clipUUID;
- (id)faceCrops;
- (id)feedbackRequestURLForClipWithUUID:(id)arg1;
- (id)feedbackServiceHost;
- (id)feedbackServiceURL;
- (id)feedbackSession;
- (id)initWithFeedbackSession:(id)arg1 cameraProfileUUID:(id)arg2 clipUUID:(id)arg3;
- (void)main;
- (id)serviceResult;
- (void)setAssetData:(id)arg1;
- (void)setFaceCrops:(id)arg1;
- (void)setServiceResult:(id)arg1;
- (id)temporaryFileURLs;

@end
