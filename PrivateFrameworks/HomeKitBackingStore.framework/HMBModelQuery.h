
@interface HMBModelQuery : HMFObject {
    NSDictionary * _argumentFields;
    NSDictionary * _arguments;
    NSDictionary * _encodedDefaultValuesByArgumentName;
    NSNumber * _initialSequence;
    unsigned long long  _maximumRowsPerSelect;
    Class  _modelClass;
    NSMapTable * _preparedQueries;
    NSArray * _sqlColumns;
    NSString * _sqlPredicate;
    NSString * _sqlSelect;
}

@property (nonatomic, readonly) NSDictionary *argumentFields;
@property (nonatomic, readonly) NSDictionary *arguments;
@property (nonatomic, readonly) NSDictionary *encodedDefaultValuesByArgumentName;
@property (nonatomic, readonly) bool hasExpectedIndexes;
@property (nonatomic, readonly) NSNumber *initialSequence;
@property (nonatomic, readonly) unsigned long long maximumRowsPerSelect;
@property (nonatomic, retain) Class modelClass;
@property (nonatomic, readonly) NSMapTable *preparedQueries;
@property (nonatomic, readonly) NSArray *sqlColumns;
@property (nonatomic, readonly) NSString *sqlPredicate;
@property (nonatomic, readonly) NSString *sqlSelect;

- (void).cxx_destruct;
- (id)argumentFields;
- (id)arguments;
- (id)description;
- (id)encodedDefaultValuesByArgumentName;
- (bool)hasExpectedIndexes;
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 arguments:(id)arg5;
- (id)initialSequence;
- (unsigned long long)maximumRowsPerSelect;
- (Class)modelClass;
- (id)performQueryOn:(id)arg1 arguments:(id)arg2;
- (id)prepareOnTable:(id)arg1;
- (id)preparedQueries;
- (void)setModelClass:(Class)arg1;
- (id)sqlColumns;
- (id)sqlPredicate;
- (id)sqlSelect;

@end
