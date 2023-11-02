
@interface _CNAutocompleteTableViewModelDiff : NSObject {
    NSIndexSet * _changedRows;
    NSIndexSet * _deletedRows;
    NSIndexSet * _insertedRows;
}

@property (nonatomic, retain) NSIndexSet *changedRows;
@property (nonatomic, retain) NSIndexSet *deletedRows;
@property (nonatomic, retain) NSIndexSet *insertedRows;

- (void).cxx_destruct;
- (id)changedRows;
- (id)deletedRows;
- (id)insertedRows;
- (void)setChangedRows:(id)arg1;
- (void)setDeletedRows:(id)arg1;
- (void)setInsertedRows:(id)arg1;

@end
