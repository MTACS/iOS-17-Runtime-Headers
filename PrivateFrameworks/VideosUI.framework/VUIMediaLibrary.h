
@interface VUIMediaLibrary : VUIMediaLibraryImageLoader {
    NSObject<VUIMediaLibraryIdentifier> * _identifier;
    VUIMediaLibraryManager * _manager;
    unsigned long long  _revision;
    unsigned long long  _type;
}

@property (getter=isConnectable, nonatomic, readonly) bool connectable;
@property (nonatomic, readonly) unsigned long long connectionState;
@property (nonatomic, copy) NSObject<VUIMediaLibraryIdentifier> *identifier;
@property (nonatomic, readonly) VUIMediaLibraryManager *manager;
@property (nonatomic) unsigned long long revision;
@property (nonatomic, readonly) bool supportsDRMContent;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoaderIdentifier;
- (unsigned long long)_incrementRevision;
- (void)_postContentsDidChangeNotification;
- (void)_updateWithTitle:(id)arg1 connectionState:(unsigned long long)arg2;
- (void)connectWithCompletionHandler:(id /* block */)arg1 progressHandler:(id /* block */)arg2;
- (unsigned long long)connectionState;
- (id)description;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3;
- (bool)isConnectable;
- (bool)isEqual:(id)arg1;
- (id)manager;
- (unsigned long long)revision;
- (id)saveMediaEntity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setRevision:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)supportsDRMContent;
- (id)title;
- (unsigned long long)type;

@end
