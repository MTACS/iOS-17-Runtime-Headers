
@interface _PBFSimulatorGalleryProvider : NSObject <PBFGalleryProviding> {
    ATXFaceGalleryConfiguration * _generatedGallery;
    NSDictionary * _receivedDescriptors;
    NSLocale * _receivedLocale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)fetchFaceGalleryConfigurationWithCompletion:(id /* block */)arg1;
- (void)posterBoardDidUpdateDescriptors:(id)arg1 completion:(id /* block */)arg2;
- (bool)shouldRequeryForGalleryAfterUpdateDescriptors;

@end
