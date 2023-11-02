
@interface CalMigrationToolReminderMigrationController : NSObject <CalMigrationController> {
    <CalMigrationController> * _defaultProvider;
    CalMigrationToolOptions * _toolOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CalMigrationController> *defaultProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldPerformMigration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CalMigrationToolOptions *toolOptions;

- (void).cxx_destruct;
- (id)defaultProvider;
- (id)initWithToolOptions:(id)arg1 defaultProvider:(id)arg2;
- (void)migrationDidFinishWithResult:(unsigned long long)arg1;
- (bool)shouldPerformMigration;
- (id)toolOptions;

@end
