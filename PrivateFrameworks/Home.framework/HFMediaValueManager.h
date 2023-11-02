
@interface HFMediaValueManager : NSObject <HFHomeKitItemProtocol, HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource> {
    NSError * _cachedPlaybackStateWriteError;
    bool  _hasPendingWrites;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    NSMutableArray * _transactionStack;
}

@property (nonatomic, retain) NSError *cachedPlaybackStateWriteError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPendingWrites;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *transactionStack;

- (void).cxx_destruct;
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(bool)arg3;
- (void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(bool)arg3 notifyDidUpdate:(bool)arg4;
- (id)cachedPlaybackStateWriteError;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(bool)arg2;
- (bool)hasPendingWrites;
- (bool)hasPendingWritesForRouteID:(id)arg1;
- (id)homeKitObject;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (id)mediaProfileContainer;
- (id)mediaProfileContainerForRouteID:(id)arg1;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)setCachedPlaybackStateWriteError:(id)arg1;
- (void)setTransactionStack:(id)arg1;
- (id)transactionStack;
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;

@end
