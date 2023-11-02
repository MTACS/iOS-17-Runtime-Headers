
@interface CalDefaultCalendarMigrationController : NSObject <CalMigrationController> {
    <CalCalendarMigrationDefaultsProvider> * _defaultsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CalCalendarMigrationDefaultsProvider> *defaultsProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldPerformMigration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultsProvider;
- (id)initWithDefaultsProvider:(id)arg1;
- (void)migrationDidFinishWithResult:(unsigned long long)arg1;
- (bool)shouldPerformMigration;

@end
