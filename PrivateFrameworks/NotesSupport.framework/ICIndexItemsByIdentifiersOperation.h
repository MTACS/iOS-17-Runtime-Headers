
@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation {
    NSArray * _objectIDURIsToIndex;
}

@property (nonatomic, copy) NSArray *objectIDURIsToIndex;

- (void).cxx_destruct;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 objectIDURIsToIndex:(id)arg3;
- (void)main;
- (id)objectIDURIsToIndex;
- (void)setObjectIDURIsToIndex:(id)arg1;

@end
