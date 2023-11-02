
@interface SYBacklinkMonitorFilterCacheOperation : SYBacklinkMonitorOperation

- (void)_finishProcessingAndNotify;
- (void)_searchBacklinksForInputUserActivity;
- (void)_updateBacklinkFilterCacheWithInfos:(id)arg1;
- (long long)type;

@end
