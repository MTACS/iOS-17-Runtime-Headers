
@interface TPSDocument : TPSSerializableObject <NSCopying, NSSecureCoding> {
    TPSAssetFileInfoManager * _assetFileInfoManager;
    NSString * _clientConditionID;
    NSString * _clonedFromID;
    NSString * _correlationID;
    NSString * _identifier;
    NSArray * _keywords;
    NSString * _language;
    long long  _lastModifiedDate;
    TPSNotification * _notification;
    NSString * _userLanguageCode;
    NSString * _variantID;
    TPSWidgetContent * _widgetContent;
}

@property (nonatomic, copy) TPSAssetFileInfoManager *assetFileInfoManager;
@property (nonatomic, copy) NSString *clientConditionID;
@property (nonatomic, copy) NSString *clonedFromID;
@property (nonatomic, copy) NSString *correlationID;
@property (getter=isHardwareWelcome, nonatomic, readonly) bool hardwareWelcome;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) long long lastModifiedDate;
@property (nonatomic, copy) TPSNotification *notification;
@property (getter=isSoftwareWelcome, nonatomic, readonly) bool softwareWelcome;
@property (nonatomic, copy) NSString *userLanguageCode;
@property (nonatomic, copy) NSString *variantID;
@property (getter=isWelcome, nonatomic, readonly) bool welcome;
@property (nonatomic, copy) TPSWidgetContent *widgetContent;

+ (id)URLWithTipIdentifier:(id)arg1 collectionIdentifier:(id)arg2 referrer:(id)arg3;
+ (id)contentDictionaryForDictionary:(id)arg1 fromMatchingClientConditions:(id)arg2;
+ (id)deliveryInfoForDictionary:(id)arg1;
+ (id)deliveryInfoIdForDictionary:(id)arg1;
+ (id)documentsForDictionary:(id)arg1;
+ (id)fileIdMapForDictionary:(id)arg1;
+ (void)getValuesFromOpenURLSchemeQueryItems:(id)arg1 tipIdentifier:(id*)arg2 collectionIdentifier:(id*)arg3 referrer:(id*)arg4;
+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLWithReferrer:(id)arg1;
- (id)assetFileInfoManager;
- (id)clientConditionID;
- (id)clonedFromID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlationID;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasWidgetContent;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2 identifierKey:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isHardwareWelcome;
- (bool)isSoftwareWelcome;
- (bool)isWelcome;
- (id)keywords;
- (id)language;
- (long long)lastModifiedDate;
- (id)notification;
- (void)setAssetFileInfoManager:(id)arg1;
- (void)setClientConditionID:(id)arg1;
- (void)setClonedFromID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLastModifiedDate:(long long)arg1;
- (void)setNotification:(id)arg1;
- (void)setUserLanguageCode:(id)arg1;
- (void)setVariantID:(id)arg1;
- (void)setWidgetContent:(id)arg1;
- (void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2 clientConditionIdentifier:(id)arg3 fileIdMap:(id)arg4 clientConditions:(id)arg5;
- (id)userLanguageCode;
- (id)variantID;
- (id)widgetContent;

@end
