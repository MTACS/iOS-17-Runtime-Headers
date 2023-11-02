
@interface WFPBActionButtonConfigurationEvent : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    struct { 
        unsigned int success : 1; 
    }  _has;
    NSString * _intentIdentifier;
    NSString * _key;
    NSString * _sectionIdentifier;
    bool  _success;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasIntentIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSectionIdentifier;
@property (nonatomic) bool hasSuccess;
@property (nonatomic, retain) NSString *intentIdentifier;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *sectionIdentifier;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasIntentIdentifier;
- (bool)hasKey;
- (bool)hasSectionIdentifier;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (id)intentIdentifier;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setIntentIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
