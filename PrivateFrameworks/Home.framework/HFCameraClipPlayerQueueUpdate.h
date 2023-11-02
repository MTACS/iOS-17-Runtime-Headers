
@interface HFCameraClipPlayerQueueUpdate : NSObject {
    <HFCameraClipManager> * _clipManager;
    NSArray * _clips;
    bool  _hasQueueChanges;
    NSArray * _initialQueuedItems;
    NSDictionary * _initialQueuedItemsByClipID;
    bool  _queueChangesRequireRebuild;
    HFUniqueArrayDiff * _queueDiff;
    unsigned long long  _queueLimit;
    HFCameraClipPosition * _targetPosition;
    NSArray * _updatedClipQueue;
}

@property (nonatomic, readonly) <HFCameraClipManager> *clipManager;
@property (nonatomic, readonly) NSArray *clips;
@property (nonatomic) bool hasQueueChanges;
@property (nonatomic, readonly) NSArray *initialQueuedItems;
@property (nonatomic, readonly) NSDictionary *initialQueuedItemsByClipID;
@property (nonatomic) bool queueChangesRequireRebuild;
@property (nonatomic, retain) HFUniqueArrayDiff *queueDiff;
@property (nonatomic, readonly) unsigned long long queueLimit;
@property (nonatomic, readonly) HFCameraClipPosition *targetPosition;
@property (nonatomic, retain) NSArray *updatedClipQueue;

- (void).cxx_destruct;
- (id)_buildNewClipQueueForPosition:(id)arg1;
- (void)_computeQueueDiff;
- (id)clipManager;
- (id)clips;
- (bool)hasQueueChanges;
- (id)initWithClipManager:(id)arg1 clips:(id)arg2 targetPosition:(id)arg3 queuedItems:(id)arg4 queueLimit:(unsigned long long)arg5;
- (id)initialQueuedItems;
- (id)initialQueuedItemsByClipID;
- (void)performUpdatesOnQueue:(id)arg1;
- (bool)queueChangesRequireRebuild;
- (id)queueDiff;
- (unsigned long long)queueLimit;
- (void)setHasQueueChanges:(bool)arg1;
- (void)setQueueChangesRequireRebuild:(bool)arg1;
- (void)setQueueDiff:(id)arg1;
- (void)setUpdatedClipQueue:(id)arg1;
- (id)targetPosition;
- (id)updatedClipQueue;

@end
