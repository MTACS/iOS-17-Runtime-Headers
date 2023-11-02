
@interface PKDirectoryCoordinator : NSObject <PKInvalidateObservable> {
    _Atomic bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (void)performCoordinatedAction:(id /* block */)arg1;

@end
