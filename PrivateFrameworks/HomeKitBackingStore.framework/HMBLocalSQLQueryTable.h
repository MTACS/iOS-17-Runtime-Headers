
@interface HMBLocalSQLQueryTable : HMFObject {
    NSArray * _columnFields;
    NSArray * _columnNames;
    HMBLocalSQLContext * _context;
    HMBSQLStatement * _deleteAll;
    HMBSQLStatement * _deleteRecord;
    NSString * _dropTableSQL;
    bool  _finalized;
    Class  _modelClass;
    NSString * _modelType;
    HMBSQLQueryStatement * _selectAll;
    HMBSQLStatement * _updateRecord;
    NSHashTable * _userQueries;
}

@property (nonatomic, readonly) NSArray *columnFields;
@property (nonatomic, readonly) NSArray *columnNames;
@property (nonatomic, readonly) HMBLocalSQLContext *context;
@property (nonatomic, readonly) HMBSQLStatement *deleteAll;
@property (nonatomic, readonly) HMBSQLStatement *deleteRecord;
@property (nonatomic, readonly) NSString *dropTableSQL;
@property (nonatomic) bool finalized;
@property (nonatomic, readonly) Class modelClass;
@property (nonatomic, readonly) NSString *modelType;
@property (nonatomic, readonly) HMBSQLQueryStatement *selectAll;
@property (nonatomic, readonly) HMBSQLStatement *updateRecord;
@property (nonatomic, readonly) NSHashTable *userQueries;

- (void).cxx_destruct;
- (unsigned long long)_deleteAllQueriesForZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)_deleteQueryForRecordRow:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)_updateQueryForZoneRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 encodedColumns:(id)arg3 error:(id*)arg4;
- (id)buildQueriableFieldsForModel:(id)arg1;
- (id)columnFields;
- (id)columnNames;
- (id)context;
- (void)dealloc;
- (id)deleteAll;
- (id)deleteRecord;
- (id)dropTableSQL;
- (void)finalize;
- (bool)finalized;
- (id)initWithContext:(id)arg1 queryModel:(Class)arg2 prepareOnly:(bool)arg3;
- (Class)modelClass;
- (id)modelType;
- (id)performQueryOn:(id)arg1 properties:(id)arg2 filter:(id /* block */)arg3;
- (id)selectAll;
- (void)setFinalized:(bool)arg1;
- (id)updateRecord;
- (id)userQueries;

@end
