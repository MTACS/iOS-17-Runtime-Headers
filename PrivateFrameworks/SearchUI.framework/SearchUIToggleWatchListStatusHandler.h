
@interface SearchUIToggleWatchListStatusHandler : SearchUICommandHandler

+ (id)fallbackCommandForRowModel:(id)arg1 environment:(id)arg2;

- (unsigned long long)destination;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (bool)shouldDeselectAfterExecution;

@end
