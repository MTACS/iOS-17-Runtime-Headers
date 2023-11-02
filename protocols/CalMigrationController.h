
@protocol CalMigrationController <NSObject>

@required

- (void)migrationDidFinishWithResult:(unsigned long long)arg1;
- (bool)shouldPerformMigration;

@end
