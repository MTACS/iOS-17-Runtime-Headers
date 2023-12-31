
@interface AVPlayerConnection : NSObject {
    NSError * _error;
    AVWeakReference * _playerItemReference;
    AVWeakReference * _playerReference;
    long long  _status;
}

@property (nonatomic, readonly) long long status;

- (bool)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2;
- (id)player;
- (id)playerItem;
- (void)removeItemFromPlayQueue;
- (long long)status;

@end
