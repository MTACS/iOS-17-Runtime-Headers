
@interface AVBehaviorStorage : NSObject {
    id  _AVKitOwner;
    NSMapTable * _behaviorsAndBehaviorContexts;
}

@property (nonatomic) id AVKitOwner;
@property (nonatomic, readonly) NSMapTable *behaviorsAndBehaviorContexts;

- (void).cxx_destruct;
- (id)AVKitOwner;
- (void)addBehavior:(id)arg1;
- (id)behaviorContextOfClass:(Class)arg1;
- (id)behaviorOfClass:(Class)arg1;
- (id)behaviors;
- (id)behaviorsAndBehaviorContexts;
- (void)enumerateAllBehaviorContextsConformingToProtocol:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateAllBehaviorContextsImplementingSelector:(SEL)arg1 forProtocol:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateAllBehaviorContextsUsingBlock:(id /* block */)arg1;
- (void)enumerateAllBehaviorsConformingToProtocol:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateAllBehaviorsUsingBlock:(id /* block */)arg1;
- (id)initWithAVKitOwner:(id)arg1;
- (void)removeBehavior:(id)arg1;
- (void)setAVKitOwner:(id)arg1;

@end
