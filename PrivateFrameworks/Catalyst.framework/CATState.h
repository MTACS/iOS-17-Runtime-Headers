
@interface CATState : NSObject {
    SEL  _enterAction;
    SEL  _exitAction;
    NSString * _name;
    NSMutableDictionary * mTransitionByTriggeringEvent;
}

@property (nonatomic) SEL enterAction;
@property (nonatomic) SEL exitAction;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)new;

- (void).cxx_destruct;
- (void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2;
- (void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3;
- (id)description;
- (SEL)enterAction;
- (SEL)exitAction;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setEnterAction:(SEL)arg1;
- (void)setExitAction:(SEL)arg1;
- (id)transitionWithTriggeringEvent:(id)arg1;

@end
