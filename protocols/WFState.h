
@protocol WFState <NSObject>

@required

- (bool)canTransitionToState:(id <WFState>)arg1;

@optional

- (void)performAction;

@end
