
@interface _UIDragManager : NSObject {
    CAContext * _dragImageContext;
    NSArray * _dragSessionDestinations;
    NSArray * _dragSessionSources;
    long long  _pendingSessionRequests;
    NSMutableArray * _pendingSessionRequestsCompletionBlocks;
    UIScreen * _screen;
}

@property (nonatomic, readonly) CAContext *dragImageContext;
@property (nonatomic, copy) NSArray *dragSessionDestinations;
@property (nonatomic, copy) NSArray *dragSessionSources;
@property (nonatomic, readonly) UIScreen *screen;

+ (void)initializeDraggingSystem;

- (void).cxx_destruct;
- (void)_willAddDeactivationReason:(id)arg1;
- (id)beginDragWithSessionConfiguration:(id)arg1;
- (void)deleteSlots:(id)arg1;
- (id)dragDestinationWithEvent:(id)arg1;
- (id)dragImageContext;
- (id)dragSessionDestinations;
- (id)dragSessionSources;
- (bool)hasPendingSessionRequests;
- (id)initWithScreen:(id)arg1;
- (void)performAfterCompletingPendingSessionRequests:(id /* block */)arg1;
- (void)performPendingSessionCompletionBlocksIfPossible;
- (id)screen;
- (void)sessionDestinationDidEnd:(id)arg1;
- (void)sessionSourceDidEnd:(id)arg1;
- (id)sessionSourceWithIdentifier:(unsigned int)arg1;
- (void)setDragSessionDestinations:(id)arg1;
- (void)setDragSessionSources:(id)arg1;
- (unsigned int)uploadImage:(struct CGImage { }*)arg1;

@end
