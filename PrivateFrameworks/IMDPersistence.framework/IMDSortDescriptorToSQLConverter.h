
@interface IMDSortDescriptorToSQLConverter : NSObject {
    NSString * _expression;
    NSDictionary * _keyPathsToColumns;
}

@property (nonatomic, readonly, copy) NSString *expression;
@property (nonatomic, readonly, copy) NSDictionary *keyPathsToColumns;

- (void).cxx_destruct;
- (id)_columnWithSortDescriptor:(id)arg1;
- (id)_orderByClauseWithSortDescriptor:(id)arg1;
- (id)expression;
- (id)init;
- (id)initWithSortDescriptor:(id)arg1 keyPathsToColumns:(id)arg2;
- (id)keyPathsToColumns;

@end
