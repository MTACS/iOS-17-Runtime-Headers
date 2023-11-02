
@interface SKUILocalizedStringTable : NSObject {
    NSBundle * _bundle;
    NSDictionary * _strings;
    NSString * _tableName;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *tableName;

- (void).cxx_destruct;
- (id)_legacyLanguageNameForLanguageCode:(id)arg1;
- (id)bundle;
- (id)initWithBundle:(id)arg1 localeName:(id)arg2 tableName:(id)arg3;
- (id)localizedStringForKey:(id)arg1;
- (id)tableName;

@end
