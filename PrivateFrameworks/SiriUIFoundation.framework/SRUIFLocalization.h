
@interface SRUIFLocalization : NSObject {
    NSBundle * _bundle;
    AFLocalization * _localization;
    NSString * _tableName;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundle:(id)arg1 tableName:(id)arg2;
- (id)localizedStringForLanguageCode:(id)arg1 key:(id)arg2;
- (id)localizedStringWithSiriLanguageForKey:(id)arg1;

@end
