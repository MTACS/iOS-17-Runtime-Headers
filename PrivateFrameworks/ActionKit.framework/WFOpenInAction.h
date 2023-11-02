
@interface WFOpenInAction : WFAction {
    NSArray * _contentClasses;
}

@property (nonatomic, retain) NSArray *contentClasses;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (id)contentClasses;
- (id)contentDestinationWithError:(id*)arg1;
- (id)inputContentClasses;
- (bool)inputsMultipleItems;
- (void)openContentInSelectedApp:(id)arg1;
- (void)openContentUsingDefaultApp:(id)arg1;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)selectedApp;
- (void)setContentClasses:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateContentClasses;

@end
