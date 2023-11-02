
@interface MailUI.MUIMessageListPrototypeViewController : MUIPlatformViewController <MessageListDataSourceDelegate, MessageListDataSourceProvider, MessageListRecentSectionDataSourceDelegate, MessageListSectionDataSourceDelegate, MessageListSectionDataSourceSelectionModelProvider, UICollectionViewDelegate> {
    void $__lazy_storage_$_collectionAndScrollView;
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_contactStore;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_state;
    void accountRepository;
    void layoutValuesHelper;
    void mailboxRepository;
    void mailboxes;
    void messageListSelectionModel;
    void messageRepository;
}

- (void).cxx_destruct;
- (id)init;
- (id)init:(id)arg1 mailboxes:(id)arg2 contactStore:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialLoadCompletedPromiseForMessageListSectionDataSource:(id)arg1;
- (void)loadView;
- (void)messageListDataSource:(id)arg1 didUpdateWithChange:(id)arg2 section:(id)arg3 animated:(bool)arg4;
- (id)messageListDataSource:(id)arg1 sectionDataSourceForSection:(id)arg2 objectID:(id)arg3 messageList:(id)arg4;
- (bool)messageListDataSource:(id)arg1 shouldAnimateNextUpdateInSectionDataSource:(id)arg2 change:(id)arg3;
- (bool)messageListDataSource:(id)arg1 shouldSuspendUpdatesAfterChange:(id)arg2;
- (void)messageListDataSource:(id)arg1 willUpdateWithChange:(id)arg2 section:(id)arg3 animated:(bool)arg4 cleanSnapshot:(bool)arg5;
- (void)messageListDataSourceDidSkipUpdate:(id)arg1 section:(id)arg2 change:(id)arg3;
- (void)messageListDataSourcePrepareUpdate:(id)arg1 section:(id)arg2 cleanSnapshot:(bool)arg3;
- (void)messageListDataSourceUpdateFailed:(id)arg1 section:(id)arg2;
- (void)messageListRecentSectionDataSource:(id)arg1 didConfigureCellAtIndexPath:(id)arg2 item:(id)arg3 itemWasCached:(bool)arg4 duration:(double)arg5;
- (void)messageListRecentSectionDataSource:(id)arg1 didFailToConfigureCellAtIndexPath:(id)arg2 error:(id)arg3;
- (bool)messageListRecentSectionDataSourceIsInExpandedEnvironment:(id)arg1;
- (void)messageListSectionDataSource:(id)arg1 addMessagesToStackWithItemIDs:(id)arg2;
- (void)messageListSectionDataSource:(id)arg1 deletedMessagesWithItemIdentifiers:(id)arg2;
- (void)messageListSectionDataSource:(id)arg1 didAddMessagesWithItemIdentifiers:(id)arg2;
- (void)messageListSectionDataSource:(id)arg1 handleRowSelectionAfterMovingMessagesWithItemIdentifiers:(id)arg2;
- (void)messageListSectionDataSource:(id)arg1 updatedOldestItemsForMailboxes:(id)arg2;
- (void)messageListSectionDataSource:(id)arg1 willAddMessagesWithItemIdentifiers:(id)arg2;
- (id)selectionModelForMessageListSectionDataSource:(id)arg1;
- (void)showBlankCellAlertForMessageListSectionDataSource:(id)arg1 itemID:(id)arg2 indexPath:(id)arg3 reason:(id)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
