
@interface SetChange : NSObject {
    bool  _deleteAll;
    NSIndexSet * _deletedIndexes;
    bool  _empty;
    bool  _insertAll;
    NSIndexSet * _insertedIndexes;
    NSIndexSet * _modifiedIndexes;
    NSSet * _moves;
    bool  _singleDelete;
}

@property (getter=isDeleteAll, nonatomic, readonly) bool deleteAll;
@property (nonatomic, readonly) NSIndexSet *deletedIndexes;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isInsertAll, nonatomic, readonly) bool insertAll;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) NSIndexSet *modifiedIndexes;
@property (nonatomic, readonly) NSSet *moves;
@property (getter=isSingleDelete, nonatomic, readonly) bool singleDelete;

+ (id)emptyChange;

- (void).cxx_destruct;
- (id)deletedIndexes;
- (id)description;
- (unsigned long long)hash;
- (id)initAsDeleteAllWithIndexes:(id)arg1;
- (id)initAsInsertAllWithIndexes:(id)arg1;
- (id)initWithInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2 modifiedIndexes:(id)arg3 moves:(id)arg4;
- (id)insertedIndexes;
- (bool)isDeleteAll;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChange:(id)arg1;
- (bool)isInsertAll;
- (bool)isSingleDelete;
- (id)modifiedIndexes;
- (id)moves;

@end
