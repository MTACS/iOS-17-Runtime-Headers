
@interface WFPBShowFocusConfigurationEvent : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    NSString * _intentType;
    NSString * _key;
    NSString * _systemFilterType;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, readonly) bool hasAppBundleIdentifier;
@property (nonatomic, readonly) bool hasIntentType;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSystemFilterType;
@property (nonatomic, retain) NSString *intentType;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *systemFilterType;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleIdentifier;
- (bool)hasIntentType;
- (bool)hasKey;
- (bool)hasSystemFilterType;
- (unsigned long long)hash;
- (id)intentType;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setIntentType:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSystemFilterType:(id)arg1;
- (id)systemFilterType;
- (void)writeTo:(id)arg1;

@end
