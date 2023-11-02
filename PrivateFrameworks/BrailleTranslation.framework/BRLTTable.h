
@interface BRLTTable : NSObject <NSCopying> {
    NSBundle * _bundle;
    NSString * _language;
    NSString * _serviceIdentifier;
    NSString * _variant;
}

@property (nonatomic, retain) NSBundle *_bundle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *localizedLanguage;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedNameWithService;
@property (nonatomic, readonly) NSString *localizedService;
@property (nonatomic, readonly) NSString *localizedVariant;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) bool supportsTranslationMode8Dot;
@property (nonatomic, readonly) bool supportsTranslationModeContracted;
@property (nonatomic, readonly) NSString *tableIdentifier;
@property (nonatomic, readonly) NSString *variant;

- (void).cxx_destruct;
- (id)_brailleTableDictionary;
- (id)_bundle;
- (bool)_isEqualToTable:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 language:(id)arg2 variant:(id)arg3;
- (id)initWithServiceIdentifier:(id)arg1 tableIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)localizedLanguage;
- (id)localizedName;
- (id)localizedNameWithService;
- (id)localizedService;
- (id)localizedVariant;
- (id)serviceIdentifier;
- (void)set_bundle:(id)arg1;
- (bool)supportsTranslationMode8Dot;
- (bool)supportsTranslationModeContracted;
- (id)tableIdentifier;
- (id)variant;

@end
