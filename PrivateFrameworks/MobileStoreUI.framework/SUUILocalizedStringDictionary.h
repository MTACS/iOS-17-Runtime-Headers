
@interface SUUILocalizedStringDictionary : NSObject {
    NSArray * _bundles;
    NSString * _localeName;
    NSMutableArray * _stringTables;
}

@property (nonatomic, readonly) NSString *localeName;

- (void).cxx_destruct;
- (id)_stringTableForBundle:(id)arg1 tableName:(id)arg2;
- (id)initWithLocaleName:(id)arg1 bundles:(id)arg2;
- (id)localeName;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;

@end
