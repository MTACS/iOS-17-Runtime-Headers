
@interface HUAccessoryDiagnosticsViewController : HUItemTableViewController <HUSwitchCellDelegate, UITextViewDelegate> {
    HUAccessoryDiagnosticsItemManager * _accessoryLogsItemManager;
}

@property (nonatomic) HUAccessoryDiagnosticsItemManager *accessoryLogsItemManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryLogsItemManager;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)generateNewLogs:(id)arg1;
- (id)initWithSourceItem:(id)arg1;
- (void)setAccessoryLogsItemManager:(id)arg1;
- (void)showShareSheetForItem:(id)arg1 withAnchorView:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
