
@interface HFCameraClipQueuePlayer : AVQueuePlayer

@property (nonatomic, readonly) HFCameraClipPlayerItem *currentItem;
@property (nonatomic, readonly, copy) NSArray *items;

- (id)currentItem;
- (id)initWithItems:(id)arg1;
- (id)items;

@end
