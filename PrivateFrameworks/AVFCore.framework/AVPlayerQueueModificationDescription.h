
@interface AVPlayerQueueModificationDescription : NSObject {
    AVPlayerItem * _afterItem;
    AVPlayerItem * _item;
    long long  _modificationType;
}

@property (nonatomic, readonly) AVPlayerItem *afterItem;
@property (nonatomic, readonly) AVPlayerItem *item;
@property (nonatomic, readonly) long long modificationType;

+ (id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2;
+ (id)modificationForRemovingItem:(id)arg1;

- (id)afterItem;
- (void)dealloc;
- (id)init;
- (id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3;
- (id)item;
- (long long)modificationType;

@end
