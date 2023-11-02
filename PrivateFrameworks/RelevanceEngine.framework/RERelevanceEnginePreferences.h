
@interface RERelevanceEnginePreferences : NSObject <NSCopying> {
    <RERelevanceEnginePreferencesDelegate> * _delegate;
    NSSet * _disabledDataSourceIdentifiers;
    unsigned long long  _mode;
}

@property (nonatomic) <RERelevanceEnginePreferencesDelegate> *delegate;
@property (nonatomic, copy) NSSet *disabledDataSourceIdentifiers;
@property (nonatomic) unsigned long long mode;

+ (id)defaultPreferences;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)disabledDataSourceIdentifiers;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mode;
- (void)setDelegate:(id)arg1;
- (void)setDisabledDataSourceIdentifiers:(id)arg1;
- (void)setMode:(unsigned long long)arg1;

@end
