
@interface PLGlobalKeyValueAttributes : NSObject {
    Class  _anyValueClass;
    bool  _includeInMigrationHistory;
    NSString * _key;
    short  _type;
}

@property (nonatomic, retain) Class anyValueClass;
@property (nonatomic) bool includeInMigrationHistory;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) short type;

+ (id)attributesWithKey:(id)arg1 type:(short)arg2;
+ (id)attributesWithKey:(id)arg1 type:(short)arg2 includeInMigrationHistory:(bool)arg3 anyValueClass:(Class)arg4;

- (void).cxx_destruct;
- (Class)anyValueClass;
- (bool)includeInMigrationHistory;
- (id)initWithKey:(id)arg1 type:(short)arg2 includeInMigrationHistory:(bool)arg3 anyValueClass:(Class)arg4;
- (id)key;
- (void)setAnyValueClass:(Class)arg1;
- (void)setIncludeInMigrationHistory:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setType:(short)arg1;
- (short)type;

@end
