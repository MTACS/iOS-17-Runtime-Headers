
@protocol CalOutOfProcessMigrator <NSObject>

@required

+ (bool)performMigrationIfNeeded;

@end
