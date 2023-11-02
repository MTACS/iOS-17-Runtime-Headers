
@interface AXMOutputRequest : NSObject {
    id /* block */  _completionBlock;
    AXMOutputRequestHandle * _handle;
    bool  _interruptsAndClearsQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_actions;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSArray *activeSoundActions;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) AXMOutputRequestHandle *handle;
@property (nonatomic, readonly) NSArray *hapticActions;
@property (nonatomic) bool interruptsAndClearsQueue;
@property (nonatomic, readonly) NSArray *oneShotSoundActions;
@property (nonatomic, readonly) NSArray *speechActions;

+ (id)speechItemSeparator;

- (void).cxx_destruct;
- (void)_addAction:(id)arg1;
- (id)actions;
- (id)activeSoundActions;
- (void)addActiveSoundItemWithID:(id)arg1;
- (void)addActiveSoundItemWithURL:(id)arg1;
- (void)addHapticItemWithURL:(id)arg1;
- (void)addHapticItemWithURL:(id)arg1 intensity:(double)arg2;
- (void)addSoundItemWithID:(id)arg1;
- (void)addSoundItemWithURL:(id)arg1;
- (void)addSpeechItem:(id)arg1;
- (id /* block */)completionBlock;
- (id)handle;
- (id)hapticActions;
- (id)init;
- (bool)interruptsAndClearsQueue;
- (id)oneShotSoundActions;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInterruptsAndClearsQueue:(bool)arg1;
- (id)speechActions;

@end
