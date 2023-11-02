
@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver> {
    AXAssetController * _assetController;
    NSURL * _baseURL;
    bool  _didTryWaitingForAssetLookup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, copy) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_modelURLForType:(unsigned long long)arg1 baseURL:(id)arg2;
- (void)_performWithLock:(id /* block */)arg1;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (id)baseURL;
- (id)infoForModelAtURL:(id)arg1;
- (id)init;
- (id)modelURLForType:(unsigned long long)arg1 timeout:(double)arg2;
- (void)setBaseURL:(id)arg1;

@end
