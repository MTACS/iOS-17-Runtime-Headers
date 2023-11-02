
@interface ATXFrontBoardLayoutAggregator : NSObject {
    NSMutableDictionary * _bundleIdentifierToVisibilityMap;
}

- (void).cxx_destruct;
- (bool)_isAppWithBundleIdentifierVisible:(id)arg1;
- (id)fetchActiveApps;
- (id)init;

@end
