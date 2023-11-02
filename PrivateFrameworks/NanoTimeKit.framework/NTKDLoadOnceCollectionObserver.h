
@interface NTKDLoadOnceCollectionObserver : NSObject <NTKFaceCollectionObserver> {
    NTKFaceCollection * _collection;
    NSMutableArray * _handlers;
    bool  _hasLoaded;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)faceCollectionDidLoad:(id)arg1;
- (id)initWithCollection:(id)arg1;
- (void)performOnLoad:(id /* block */)arg1;

@end
