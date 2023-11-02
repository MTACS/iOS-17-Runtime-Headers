
@interface MessageListRecentSectionDataSource : MessageListSectionDataSource {
    UICollectionViewCellRegistration * _cellRegistration;
    bool  _hideFollowUp;
    NSDictionary * _snippetHintsByGlobalMessageID;
    <EFCancelable> * _userDefaultsObserver;
}

@property (getter=shouldHideFollowUp, nonatomic) bool hideFollowUp;
@property (nonatomic, retain) NSDictionary *snippetHintsByGlobalMessageID;
@property (nonatomic, retain) <EFCancelable> *userDefaultsObserver;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 atIndexPath:(id)arg2 itemID:(id)arg3;
- (void)collection:(id)arg1 shouldHighlightSnippetHints:(id)arg2;
- (id)configuredCollectionViewCellForCollectionView:(id)arg1 indexPath:(id)arg2 itemID:(id)arg3;
- (id)initWithIdentifier:(id)arg1 section:(id)arg2 collectionView:(id)arg3 listCellClass:(Class)arg4 messageList:(id)arg5 initialLoadCompletedPromise:(id)arg6 layoutValuesHelper:(id)arg7 state:(id)arg8;
- (void)setHideFollowUp:(bool)arg1;
- (void)setSnippetHintsByGlobalMessageID:(id)arg1;
- (void)setUserDefaultsObserver:(id)arg1;
- (bool)shouldHideFollowUp;
- (id)snippetHintsByGlobalMessageID;
- (id)userDefaultsObserver;

@end
