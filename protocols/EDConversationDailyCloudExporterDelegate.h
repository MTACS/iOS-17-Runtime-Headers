
@protocol EDConversationDailyCloudExporterDelegate

@required

- (long long)currentSyncAnchorForDailyExport;
- (NSArray *)flaggedConversationsChangedBetweenStartAnchor:(long long)arg1 endAnchor:(long long)arg2;
- (long long)previousSyncAnchorForDailyExport;
- (void)setNewPreviousSyncAnchorForDailyExport:(long long)arg1;

@end
