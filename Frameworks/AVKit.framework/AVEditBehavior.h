
@interface AVEditBehavior : NSObject <AVBehavior, AVBehaviorInternal> {
    AVEditBehaviorContext * _behaviorContext;
    <AVEditBehaviorDelegate> * _delegate;
}

@property (nonatomic) AVEditBehaviorContext *behaviorContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVEditBehaviorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)behaviorContextClass;

- (void).cxx_destruct;
- (id)behaviorContext;
- (id)delegate;
- (void)didMoveToContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)setBehaviorContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)willMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;

@end
