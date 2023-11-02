
@interface CKVideoPlayerReusePool : NSObject {
    void pool;
}

@property (nonatomic, copy) NSArray *pool;

+ (id)sharedPool;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dequeueAvailablePlayerAt:(long long)arg1;
- (id)dequeueAvailableVideoPlayer;
- (id)existingVideoPlayerForTransferGUID:(id)arg1;
- (id)init;
- (void)lowMemoryWarningReceivedWithNotification:(id)arg1;
- (id)pool;
- (void)removeUnneededVideoPlayers;
- (void)returnPlayerToPool:(id)arg1;
- (void)setPool:(id)arg1;

@end
