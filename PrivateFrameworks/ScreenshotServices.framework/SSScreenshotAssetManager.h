
@interface SSScreenshotAssetManager : NSObject {
    <SSScreenshotAssetManagerBackend> * _backend;
}

+ (id)sharedAssetManager;

- (void).cxx_destruct;
- (id)backend;
- (void)imageWithPreviouslyRegisteredIdentifier:(id)arg1 withAccessBlock:(id /* block */)arg2;
- (void)recordEditsToPersistable:(id)arg1 inTransition:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)recordEditsToPersistableForPDF:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)recordPersistableToTemporaryLocation:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)registerImageForPersistable:(id)arg1 options:(id)arg2 withRegistrationBlock:(id /* block */)arg3;
- (void)removePersistable:(id)arg1 deleteOptions:(unsigned long long)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)resetBackend;
- (void)setBackend:(id)arg1;

@end
