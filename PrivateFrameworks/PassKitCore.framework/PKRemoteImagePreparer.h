
@interface PKRemoteImagePreparer : NSObject {
    NSMutableDictionary * _completionHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _completionsLock;
    NSCache * _preparedImageCache;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)fetchRemoteImage:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRemoteImage:(id)arg1 preheatBitmap:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchRemoteImage:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 preheatBitmap:(bool)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
