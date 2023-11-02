
@interface REMAccountGroupContextChangeItem : NSObject {
    REMAccountChangeItem * _accountChangeItem;
}

@property (nonatomic, retain) REMAccountChangeItem *accountChangeItem;

- (void).cxx_destruct;
- (id)accountChangeItem;
- (id)initWithAccountChangeItem:(id)arg1;
- (void)setAccountChangeItem:(id)arg1;

@end
