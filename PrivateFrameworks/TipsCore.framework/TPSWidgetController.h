
@interface TPSWidgetController : NSObject {
    NSMutableDictionary * _assetURLSessionMap;
    <TPSWidgetControllerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _documentLock;
    TPSDocument * _preferredDocument;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _urlSessionLock;
}

@property (nonatomic, retain) NSMutableDictionary *assetURLSessionMap;
@property (nonatomic) <TPSWidgetControllerDelegate> *delegate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } documentLock;
@property (nonatomic, copy) TPSDocument *preferredDocument;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } urlSessionLock;

- (void).cxx_destruct;
- (id)assetURLSessionMap;
- (void)attemptWidgetUpdateWith:(id)arg1;
- (id)cacheFileURLForAssets:(id)arg1 language:(id)arg2 userInterfaceStyle:(long long)arg3 assetFileInfoManager:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (struct os_unfair_lock_s { unsigned int x1; })documentLock;
- (void)fetchAssetForAssets:(id)arg1 language:(id)arg2 userInterfaceStyle:(long long)arg3 assetFileInfoManager:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchWidgetAssetsForDocument:(id)arg1 preferCacheIfAvailable:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (bool)isEligibleForWelcome;
- (id)preferredDocument;
- (void)setAssetURLSessionMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPreferredDocument:(id)arg1;
- (void)setUrlSessionLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)updatePreferredWidget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSessionMapValue:(id)arg1 forKey:(id)arg2;
- (void)updateWidgetDocumentWithDocumentsMap:(id)arg1 documentsDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 preferHardwareWelcome:(bool)arg4 completionHandler:(id /* block */)arg5;
- (struct os_unfair_lock_s { unsigned int x1; })urlSessionLock;
- (void)widgetAssetsForDocument:(id)arg1 preferCacheIfAvailable:(bool)arg2 userInterfaceStyle:(long long)arg3 completionHandler:(id /* block */)arg4;

@end
