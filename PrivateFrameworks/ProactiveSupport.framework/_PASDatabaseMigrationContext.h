
@interface _PASDatabaseMigrationContext : NSObject {
    _PASSqliteDatabase * db;
    NSDictionary * migrations;
    NSObject<_PASDatabaseMigrationProtocol> * object;
    unsigned int  version;
}

- (void).cxx_destruct;
- (id)description;

@end
