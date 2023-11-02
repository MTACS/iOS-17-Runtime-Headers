
@interface FPLocalizableStringLookup : NSObject {
    NSBundle * _bundle;
    id  _cfBundle;
    NSArray * _tableNames;
}

@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) id cfBundle;
@property (nonatomic, copy) NSString *tableName;
@property (nonatomic, copy) NSArray *tableNames;

- (void).cxx_destruct;
- (id)bundle;
- (id)cfBundle;
- (id)localizedStringForKey:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setCfBundle:(id)arg1;
- (void)setTableName:(id)arg1;
- (void)setTableNames:(id)arg1;
- (id)tableName;
- (id)tableNames;

@end
