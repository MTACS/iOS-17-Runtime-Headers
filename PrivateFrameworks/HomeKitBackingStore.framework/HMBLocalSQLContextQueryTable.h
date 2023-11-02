
@interface HMBLocalSQLContextQueryTable : HMFObject {
    NSSet * _columnNames;
    NSMutableDictionary * _mutableIndexes;
}

@property (nonatomic, readonly) NSSet *columnNames;
@property (nonatomic, readonly) NSDictionary *indexes;
@property (nonatomic, readonly) NSMutableDictionary *mutableIndexes;

- (void).cxx_destruct;
- (id)columnNames;
- (id)description;
- (id)indexes;
- (id)initWithColumnNames:(id)arg1;
- (id)mutableIndexes;

@end
