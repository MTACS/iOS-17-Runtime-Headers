
@interface PKServicePaymentTransactionImageGenerator : NSObject {
    unsigned long long  _evictionHitCount;
    bool  _hasSetupTempDir;
    NSMutableDictionary * _keysHitCounts;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct { 
        void *bytes; 
        unsigned long long length; 
    }  _mappedFiles;
    NSMutableDictionary * _mappedFilesIndices;
    NSString * _nextKeyToEvict;
    PKPassKitServicesXPCService * _xpcService;
}

- (void).cxx_destruct;
- (void)_cleanMappedFile:(struct { void *x1; unsigned long long x2; })arg1;
- (unsigned long long)_nextIndexToUseAndEvictIfNeeded;
- (void)_updateNextKeyToEvict;
- (id)cachedImageDataForKey:(id)arg1;
- (void)dealloc;
- (void)imageDataForTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithPassKitServicesXPCService:(id)arg1;
- (void)setCachedImageData:(id)arg1 forKey:(id)arg2;

@end
