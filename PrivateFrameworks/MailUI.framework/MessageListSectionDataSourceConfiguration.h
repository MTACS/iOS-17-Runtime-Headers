
@interface MessageListSectionDataSourceConfiguration : NSObject {
    UICollectionView * _collectionView;
    EMCachingContactStore * _contactStore;
    <MessageListSectionDataSourceDelegate> * _delegate;
    EMObjectID * _identifier;
    EFPromise * _initialLoadCompletedPromise;
    MessageListCellLayoutValuesHelper * _layoutValuesHelper;
    Class  _listCellClass;
    EMMessageList * _messageList;
    MFSearchProgressView * _searchProgressView;
    NSString * _section;
    <MessageListSectionDataSourceSelectionModelProvider> * _selectionModelProvider;
    MessageListViewControllerState * _state;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) EMCachingContactStore *contactStore;
@property (nonatomic, readonly) <MessageListSectionDataSourceDelegate> *delegate;
@property (nonatomic, readonly) EMObjectID *identifier;
@property (nonatomic, readonly) EFPromise *initialLoadCompletedPromise;
@property (nonatomic, readonly) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (nonatomic, readonly) Class listCellClass;
@property (nonatomic, readonly) EMMessageList *messageList;
@property (nonatomic, retain) MFSearchProgressView *searchProgressView;
@property (nonatomic, readonly) NSString *section;
@property (nonatomic, readonly) <MessageListSectionDataSourceSelectionModelProvider> *selectionModelProvider;
@property (nonatomic, readonly) MessageListViewControllerState *state;

- (void).cxx_destruct;
- (id)collectionView;
- (id)contactStore;
- (id)delegate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 section:(id)arg2 collectionView:(id)arg3 listCellClass:(Class)arg4 messageList:(id)arg5 layoutValuesHelper:(id)arg6 state:(id)arg7 contactStore:(id)arg8 delegate:(id)arg9 selectionModelProvider:(id)arg10 initialLoadCompletedPromise:(id)arg11 searchProgressView:(id)arg12;
- (id)initialLoadCompletedPromise;
- (id)layoutValuesHelper;
- (Class)listCellClass;
- (id)messageList;
- (id)searchProgressView;
- (id)section;
- (id)selectionModelProvider;
- (void)setSearchProgressView:(id)arg1;
- (id)state;

@end
