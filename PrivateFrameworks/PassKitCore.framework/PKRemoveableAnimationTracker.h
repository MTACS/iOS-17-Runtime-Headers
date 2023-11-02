
@interface PKRemoveableAnimationTracker : NSObject {
    bool  _finished;
    NSString * _key;
    CALayer * _layer;
    id /* block */  _preemptAction;
    bool  _preemptAttempted;
    bool  _removed;
    bool  _tracked;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) CALayer *layer;

+ (id)createForAnimation:(id)arg1 inLayer:(id)arg2 store:(id)arg3;
+ (id)createForAnimation:(id)arg1 inLayer:(id)arg2 store:(id)arg3 withPreemptAction:(id /* block */)arg4;
+ (id)createForAnimation:(id)arg1 inLayer:(id)arg2 store:(id)arg3 withPreemptAction:(id /* block */)arg4 completionAction:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)init;
- (id)key;
- (id)layer;
- (void)preempt;
- (void)remove;

@end
