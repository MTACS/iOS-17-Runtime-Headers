
@interface WFDatabaseWorkflowStorage : NSObject <WFWorkflowStorage> {
    WFDatabase * _database;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)database;
- (id)initWithDatabase:(id)arg1;
- (bool)reloadRecord:(id)arg1 withReference:(id)arg2 error:(id*)arg3;
- (bool)saveRecord:(id)arg1 withReference:(id)arg2 error:(id*)arg3;

@end
