
@interface CLKWatchFaceLibrary : NSObject {
    NSObject<OS_dispatch_queue> * _helperQueue;
}

+ (bool)_unzipFile:(id)arg1 toPath:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addWatchFaceAtURL:(id)arg1 shouldValidate:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_importWatchFaceAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_validateWatchFaceAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addWatchFaceAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end
