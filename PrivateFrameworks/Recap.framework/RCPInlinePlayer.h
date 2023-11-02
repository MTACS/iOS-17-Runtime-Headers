
@interface RCPInlinePlayer : NSObject {
    bool  _ignoresCompletionDelay;
    bool  _needsInitialDelay;
    NSObject<OS_dispatch_queue> * _replayQueue;
    RCPPlayer * _underlyingPlayer;
}

@property (nonatomic) bool ignoresCompletionDelay;
@property (nonatomic) bool needsInitialDelay;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *replayQueue;
@property (nonatomic, retain) RCPPlayer *underlyingPlayer;

+ (void)playCommandString:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (void)playEventActions:(id /* block */)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (void)playEventStream:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (void)setIgnoresCompletionDelay:(bool)arg1;
+ (void)setNeedsInitialDelay;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_callBlock:(id /* block */)arg1;
- (void)_doInitialDelayIfNeeded;
- (bool)ignoresCompletionDelay;
- (id)init;
- (bool)needsInitialDelay;
- (void)playCommandString:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)playEventActions:(id /* block */)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)playEventStream:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)prewarmForEventStream:(id)arg1 completion:(id /* block */)arg2;
- (id)replayQueue;
- (void)setIgnoresCompletionDelay:(bool)arg1;
- (void)setNeedsInitialDelay:(bool)arg1;
- (void)setReplayQueue:(id)arg1;
- (void)setUnderlyingPlayer:(id)arg1;
- (void)tearDown;
- (id)underlyingPlayer;

@end
