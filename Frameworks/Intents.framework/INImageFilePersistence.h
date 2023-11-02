
@interface INImageFilePersistence : NSObject <INImageStoring> {
    NSArray * __supportedClasses;
    INImageBundle * _imageBundle;
}

@property (setter=_setSupportedClasses:, nonatomic, copy) NSArray *_supportedClasses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_deleteItemAtFilePath:(id)arg1;
- (id)_filePathForImageWithFileName:(id)arg1;
- (void)_setSupportedClasses:(id)arg1;
- (id)_supportedClasses;
- (bool)canStoreImage:(id)arg1;
- (id)init;
- (void)purgeExpiredImagesInEphemeralStore;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;
- (id)storeImage:(id)arg1 scaled:(bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 error:(id*)arg5;

@end
