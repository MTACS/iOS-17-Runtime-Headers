
@interface REMAccountPinnedListsContextChangeItem : NSObject {
    REMAccountChangeItem * _accountChangeItem;
}

@property (nonatomic, retain) REMAccountChangeItem *accountChangeItem;
@property (nonatomic, readonly) REMManualOrdering *unsavedManualOrdering;

- (void).cxx_destruct;
- (id)accountChangeItem;
- (id)initWithAccountChangeItem:(id)arg1;
- (void)setAccountChangeItem:(id)arg1;
- (id)unsavedManualOrdering;
- (void)updateManualOrdering:(id)arg1;

@end
