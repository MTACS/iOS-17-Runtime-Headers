
@interface CalAggregateMigrationController : NSObject <CalMigrationController> {
    NSArray * _controllers;
}

@property (nonatomic, readonly) NSArray *controllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldPerformMigration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controllers;
- (id)initWithControllers:(id)arg1;
- (void)migrationDidFinishWithResult:(unsigned long long)arg1;
- (bool)shouldPerformMigration;

@end
