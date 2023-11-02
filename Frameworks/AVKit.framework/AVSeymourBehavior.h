
@interface AVSeymourBehavior : NSObject <AVBehavior, AVBehaviorInternal> {
    AVSeymourBehaviorContext * _behaviorContext;
}

@property (nonatomic) AVSeymourBehaviorContext *behaviorContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (id)behaviorContext;
- (void)didMoveToContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)setBehaviorContext:(id)arg1;
- (void)seymourBehaviorContext:(id)arg1 didRecieveDoneButtonTapWithDismissalBlock:(id /* block */)arg2;
- (void)willMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;

@end
