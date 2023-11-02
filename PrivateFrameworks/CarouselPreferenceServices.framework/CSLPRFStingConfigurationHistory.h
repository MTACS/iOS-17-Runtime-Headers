
@interface CSLPRFStingConfigurationHistory : NSObject {
    CSLPRFStingConfigurationHistorySetting * _historySetting;
    CSLPRFStingSettingsModel * _model;
}

- (void).cxx_destruct;
- (id)_historyItemForActionType:(unsigned long long)arg1;
- (id)_itemForActionType:(unsigned long long)arg1 withBundleID:(id)arg2;
- (void)addHistoryItem:(id)arg1;
- (id)init;
- (id)itemForActionType:(unsigned long long)arg1;
- (id)itemForWorkoutWithBundleID:(id)arg1;

@end
