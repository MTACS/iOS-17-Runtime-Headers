
@interface MDUserOverrideHeuristic : NSObject <MDModeHeuristic> {
    NSUserDefaults * _internalDefaults;
}

- (void).cxx_destruct;
- (id)determineCurrentMode;
- (id)init;
- (id)initWithInternalDefaults:(id)arg1;
- (unsigned long long)internalModeOverride;

@end
