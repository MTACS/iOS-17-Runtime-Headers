
@interface _BMAccessTrackerGuardedData : NSObject {
    NSMutableDictionary * _cachedSandboxCheckResults;
    NSMutableDictionary * _loggedReads;
    NSMutableDictionary * _loggedWrites;
}

- (void).cxx_destruct;
- (id)init;

@end
