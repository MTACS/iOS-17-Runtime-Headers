
@interface VTUIVoiceSelectionOptionsView : UIView <SUICVoiceSelectionDisplaying, UICollectionViewDelegate, UITableViewDelegate, UITableViewDelegatePrivate> {
    UITableViewDiffableDataSource * _tableViewDataSource;
    SUICVoiceSelectionViewModel * _viewModel;
    <SUICVoiceSelectionEventHandling> * _voiceSelectionEventHandler;
    <SUICVoiceSelectionViewModelProviding> * _voiceSelectionViewModelProvider;
    UITableView * _voicesTableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <SUICVoiceSelectionEventHandling> *voiceSelectionEventHandler;
@property (nonatomic) <SUICVoiceSelectionViewModelProviding> *voiceSelectionViewModelProvider;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_cellSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_createAndApplySnapshotForViewModel:(id)arg1;
- (id)_diffableTableDataSource;
- (void)_setupVoicesTableView;
- (id)_tableCellForVoiceViewModel:(id)arg1 indexPath:(id)arg2;
- (id)init;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setVoiceSelectionEventHandler:(id)arg1;
- (void)setVoiceSelectionViewModelProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)voiceSelectionEventHandler;
- (void)voiceSelectionViewModelDidChange;
- (id)voiceSelectionViewModelProvider;

@end
