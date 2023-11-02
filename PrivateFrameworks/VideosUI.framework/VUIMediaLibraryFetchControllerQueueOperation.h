
@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation {
    NSArray * _fetchControllers;
    unsigned long long  _mediaLibraryRevision;
}

@property (nonatomic, copy) NSArray *fetchControllers;
@property (nonatomic) unsigned long long mediaLibraryRevision;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)fetchControllers;
- (id)init;
- (id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(unsigned long long)arg2;
- (unsigned long long)mediaLibraryRevision;
- (void)setFetchControllers:(id)arg1;
- (void)setMediaLibraryRevision:(unsigned long long)arg1;

@end
