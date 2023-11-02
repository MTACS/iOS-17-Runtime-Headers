
@interface PMLTrainingDatabaseMigrations : NSObject {
    NSDictionary * _migrations;
}

@property (nonatomic, readonly) unsigned int maxVersion;
@property (nonatomic, readonly) NSDictionary *migrations;

+ (id)mockMigrationsByAddingQueries:(id)arg1;
+ (id)skipFromZeroSchema:(unsigned int*)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMigrations:(id)arg1;
- (unsigned int)maxVersion;
- (id)migrations;

@end
