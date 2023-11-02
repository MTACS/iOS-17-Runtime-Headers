
@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject {
    id /* block */  _callback;
    bool  _invalidateImmediatlyIfInvalid;
    MRPlayerPath * _playerPath;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) bool invalidateImmediatlyIfInvalid;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)description;
- (id)initWithPlayerPath:(id)arg1 invalidateImmediatlyIfInvalid:(bool)arg2 queue:(id)arg3 invalidationCallback:(id /* block */)arg4;
- (bool)invalidateImmediatlyIfInvalid;
- (id)playerPath;
- (id)queue;

@end
