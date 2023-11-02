
@interface REMListShareeContextChangeItem : NSObject {
    REMListChangeItem * _listChangeItem;
}

@property (nonatomic, retain) REMListChangeItem *listChangeItem;
@property (nonatomic, readonly) NSArray *sharees;

- (void).cxx_destruct;
- (void)addSharee:(id)arg1;
- (id)addShareeWithDisplayName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 address:(id)arg4 status:(long long)arg5 accessLevel:(long long)arg6;
- (id)addShareeWithDisplayName:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 namePrefix:(id)arg5 nameSuffix:(id)arg6 nickname:(id)arg7 address:(id)arg8 status:(long long)arg9 accessLevel:(long long)arg10;
- (id)addShareeWithPersonNameComponents:(id)arg1 address:(id)arg2 status:(long long)arg3 accessLevel:(long long)arg4;
- (id)initWithListChangeItem:(id)arg1;
- (id)listChangeItem;
- (void)removeAllSharees;
- (void)removeSharee:(id)arg1;
- (void)setListChangeItem:(id)arg1;
- (id)sharees;

@end
