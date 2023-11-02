
@interface ICASChecklistUsageData : NSObject <AADataEventType> {
    ICASChecklistAction * _checklistAction;
    ICASMoveCheckedItemsToBottomSwitchSetting * _moveCheckedItemsToBottomSwitchSetting;
}

@property (nonatomic, readonly) ICASChecklistAction *checklistAction;
@property (nonatomic, readonly) ICASMoveCheckedItemsToBottomSwitchSetting *moveCheckedItemsToBottomSwitchSetting;

+ (id)dataName;

- (void).cxx_destruct;
- (id)checklistAction;
- (id)initWithChecklistAction:(id)arg1 moveCheckedItemsToBottomSwitchSetting:(id)arg2;
- (id)moveCheckedItemsToBottomSwitchSetting;
- (id)toDict;

@end
