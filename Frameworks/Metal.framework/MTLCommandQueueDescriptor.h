
@interface MTLCommandQueueDescriptor : NSObject <NSCopying>

@property (nonatomic) NSObject<OS_dispatch_queue> *commitQueue;
@property (nonatomic) bool commitSynchronously;
@property (nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) unsigned long long devicePartition;
@property (nonatomic) bool disableAsyncCompletionDispatch;
@property (nonatomic) bool disableCrossQueueHazardTracking;
@property (nonatomic) unsigned long long maxCommandBufferCount;
@property (nonatomic) unsigned long long qosLevel;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)commandQueueDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
