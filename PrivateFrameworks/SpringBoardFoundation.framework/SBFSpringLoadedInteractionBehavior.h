
@interface SBFSpringLoadedInteractionBehavior : NSObject <UISpringLoadedInteractionBehavior> {
    <SBFSpringLoadedInteractionBehaviorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFSpringLoadedInteractionBehaviorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)interactionDidFinish:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;

@end
