
@interface AVAppStoreBehavior : NSObject <AVBehavior, AVBehaviorInternal> {
    AVAppStoreBehaviorContext * _behaviorContext;
    bool  _prefersFirstGenerationControlsWhenEmbeddedInline;
}

@property (nonatomic) AVAppStoreBehaviorContext *behaviorContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool prefersFirstGenerationControlsWhenEmbeddedInline;
@property (readonly) Class superclass;

+ (Class)behaviorContextClass;
+ (id)behaviorWithFirstGenerationEmbeddedPlayer;

- (void).cxx_destruct;
- (id)behaviorContext;
- (void)didMoveToContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (bool)prefersFirstGenerationControlsWhenEmbeddedInline;
- (void)setBehaviorContext:(id)arg1;
- (void)willMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;

@end
