
@interface PUAssetExplorerAnalytics : NSObject {
    NSMutableSet * _eventsSent;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendEvent:(id)arg1 view:(unsigned long long)arg2 source:(unsigned long long)arg3 currentAssetCount:(long long)arg4;

@end
