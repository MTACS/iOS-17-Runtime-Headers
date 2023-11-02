
@interface VCPMADPersonIdentificationTaskResource : VCPMADResource {
    VCPPhotosFaceProcessingContext * _faceProcessingContext;
    VNPersonsModel * _personIdentityModel;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    VCPObjectPool * _sessionPool;
    GDVUVisualUnderstandingService * _vuService;
}

+ (id)sharedResource;

- (void).cxx_destruct;
- (void)_loadResources;
- (id)faceProcessingContext;
- (id)init;
- (id)personIdentityModel;
- (id)photoLibrary;
- (void)purge;
- (id)visionSession;
- (id)vuService;

@end
