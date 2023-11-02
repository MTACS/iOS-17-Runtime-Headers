
@protocol AVBehaviorContextInternal <AVBehaviorContext>

@required

- (id)behavior;
- (void)didAddBehavior:(id <AVBehavior>)arg1;
- (void)didRemoveBehavior:(id <AVBehavior>)arg1;
- (id)initWithAVKitOwner:(id)arg1;
- (void)setBehavior:(id)arg1;
- (void)willAddBehavior:(id <AVBehavior>)arg1;
- (void)willRemoveBehavior:(id <AVBehavior>)arg1;

@end
