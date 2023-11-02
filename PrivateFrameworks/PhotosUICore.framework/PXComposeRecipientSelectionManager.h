
@interface PXComposeRecipientSelectionManager : NSObject {
    PXComposeRecipientDataSource * _dataSource;
    <PXComposeRecipientSelectionManagerDelegate> * _delegate;
    NSMutableOrderedSet * _selectedComposeRecipients;
    NSMutableOrderedSet * _selectedRecipients;
    PXComposeRecipientSelectionSnapshot * _selectionSnapshot;
}

@property (nonatomic, readonly) PXComposeRecipientDataSource *dataSource;
@property (nonatomic) <PXComposeRecipientSelectionManagerDelegate> *delegate;
@property (nonatomic, retain) PXComposeRecipientSelectionSnapshot *selectionSnapshot;

- (void).cxx_destruct;
- (id)_createComposeRecipientSelectionSnapshotFromCurrentState;
- (void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)arg1;
- (id)_setSelectedState:(bool)arg1 forComposeRecipients:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)selectAll;
- (id)selectionSnapshot;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectedState:(bool)arg1 atIndex:(long long)arg2;
- (void)setSelectionSnapshot:(id)arg1;

@end
