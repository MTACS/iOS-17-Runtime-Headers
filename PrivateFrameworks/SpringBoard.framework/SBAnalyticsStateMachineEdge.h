
@interface SBAnalyticsStateMachineEdge : NSObject <BSDescriptionProviding> {
    unsigned long long  _fromState;
    id /* block */  _transition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fromState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponEvent:(unsigned long long)arg3;
+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3;
+ (id)edgeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 uponGestureState:(long long)arg3 andDo:(id /* block */)arg4;
+ (id)edgeFromState:(unsigned long long)arg1 transition:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)fromState;
- (unsigned long long)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithFromState:(unsigned long long)arg1 transition:(id /* block */)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
