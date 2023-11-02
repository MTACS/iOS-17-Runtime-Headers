
@interface SearchUIOpenCalculationHandler : SearchUICommandHandler

@property (retain) SFOpenCalculationCommand *command;

- (id)itemProviderForCopy;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (bool)supportsCopy;

@end
