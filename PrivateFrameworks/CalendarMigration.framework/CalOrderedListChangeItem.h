
@interface CalOrderedListChangeItem : NSObject {
    REMListChangeItem * _listChangeItem;
    long long  _order;
}

@property (nonatomic, retain) REMListChangeItem *listChangeItem;
@property (nonatomic) long long order;

- (void).cxx_destruct;
- (id)listChangeItem;
- (long long)order;
- (void)setListChangeItem:(id)arg1;
- (void)setOrder:(long long)arg1;

@end
