
@interface HDSimpleGraphDatabaseMigrationStep : NSObject {
    int (* _function;
    long long  _toVersion;
}

@property (nonatomic, readonly) int (*function;
@property (nonatomic, readonly) long long toVersion;

+ (id)migrationToVersion:(long long)arg1 function:(int (*)arg2;

- (id)description;
- (int (*)function;
- (long long)toVersion;

@end
