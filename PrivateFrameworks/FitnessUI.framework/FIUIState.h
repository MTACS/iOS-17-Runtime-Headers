
@interface FIUIState : NSObject {
    NSMutableSet * _childStates;
    id /* block */  _entry;
    FIUIState * _entryState;
    id /* block */  _exit;
    NSString * _label;
    FIUIState * _parentState;
    bool  _transitional;
    NSMutableDictionary * _transitions;
}

@property (nonatomic, readonly) NSMutableSet *childStates;
@property (copy) id /* block */ entry;
@property (nonatomic) FIUIState *entryState;
@property (copy) id /* block */ exit;
@property (readonly) NSString *label;
@property (nonatomic) FIUIState *parentState;
@property (getter=isTransitional) bool transitional;

+ (id)stateWithLabel:(id)arg1;
+ (id)transitionalStateFromState:(id)arg1 toState:(id)arg2 entryEvent:(long long)arg3 exitEvent:(long long)arg4;

- (void).cxx_destruct;
- (void)addChildStates:(id)arg1 withEntryState:(id)arg2;
- (id)allTransitions;
- (id)childStates;
- (id)description;
- (id /* block */)entry;
- (id)entryState;
- (void)enumerateEvents:(id /* block */)arg1;
- (id /* block */)exit;
- (id)initWithLabel:(id)arg1;
- (bool)isTransitional;
- (id)label;
- (id)parentState;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 handler:(id /* block */)arg4 gate:(id /* block */)arg5;
- (void)setEntry:(id /* block */)arg1;
- (void)setEntryState:(id)arg1;
- (void)setExit:(id /* block */)arg1;
- (void)setParentState:(id)arg1;
- (void)setTransitional:(bool)arg1;
- (id)transitionForEvent:(long long)arg1;

@end
