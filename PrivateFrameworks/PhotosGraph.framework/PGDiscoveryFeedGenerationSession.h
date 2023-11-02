
@interface PGDiscoveryFeedGenerationSession : NSObject {
    PGDiscoveryFeedGenerationOptions * _options;
    NSMutableSet * _usedLocalIdentifiers;
    PGManagerWorkingContext * _workingContext;
}

- (void).cxx_destruct;
- (void)_restoreState:(id)arg1;
- (id)additionalItemsWithTargetCount:(unsigned long long)arg1;
- (id)currentState;
- (id)initWithOptions:(id)arg1 workingContext:(id)arg2;
- (id)initWithOptions:(id)arg1 workingContext:(id)arg2 state:(id)arg3;

@end
