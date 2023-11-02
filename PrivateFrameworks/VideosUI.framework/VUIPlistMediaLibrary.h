
@interface VUIPlistMediaLibrary : VUIDeviceMediaLibrary {
    VUIPlistMediaDatabase * _database;
    NSOperationQueue * _serialOperationQueue;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
}

@property (nonatomic, retain) VUIPlistMediaDatabase *database;
@property (nonatomic, retain) NSOperationQueue *serialOperationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;

- (void).cxx_destruct;
- (void)_enqueueProcessingBlock:(id /* block */)arg1;
- (void)_handleMediaDatabaseContentsDidChangeNotification:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (id)database;
- (void)dealloc;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (id)initWithURL:(id)arg1 manager:(id)arg2;
- (id)saveMediaEntity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serialOperationQueue;
- (id)serialProcessingDispatchQueue;
- (void)setDatabase:(id)arg1;
- (void)setSerialOperationQueue:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (id)title;

@end
