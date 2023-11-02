
@interface REMAccountTemplatesContextChangeItem : NSObject {
    REMAccountChangeItem * _accountChangeItem;
}

@property (nonatomic, retain) REMAccountChangeItem *accountChangeItem;
@property (nonatomic, readonly) REMManualOrdering *unsavedManualOrdering;

- (void).cxx_destruct;
- (id)accountChangeItem;
- (id)addTemplateWithName:(id)arg1 configuration:(id)arg2;
- (id)initWithAccountChangeItem:(id)arg1;
- (void)setAccountChangeItem:(id)arg1;
- (id)unsavedManualOrdering;
- (void)updateManualOrdering:(id)arg1;

@end
