
@interface AVNewsWidgetPlayerBehavior : NSObject <AVBehavior, AVBehaviorInternal> {
    AVNewsWidgetPlayerBehaviorContext * _behaviorContext;
}

@property (nonatomic) AVNewsWidgetPlayerBehaviorContext *behaviorContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (id)behaviorContext;
- (void)dealloc;
- (void)didCancelContentTransition;
- (void)didCompleteContentTransition;
- (void)didMoveToContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)didUpdateContentTransitionProgress:(double)arg1;
- (id)init;
- (id)playerForContentTransitionType:(long long)arg1;
- (void)setBehaviorContext:(id)arg1;
- (void)willBeginContentTransition;
- (void)willCancelContentTransition;
- (void)willCompleteContentTransition;
- (void)willMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;

@end
