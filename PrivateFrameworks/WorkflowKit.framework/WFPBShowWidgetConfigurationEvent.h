
@interface WFPBShowWidgetConfigurationEvent : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    struct { 
        unsigned int isInteractive : 1; 
    }  _has;
    NSString * _intentType;
    bool  _isInteractive;
    NSString * _key;
    NSString * _sizeClass;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, readonly) bool hasAppBundleIdentifier;
@property (nonatomic, readonly) bool hasIntentType;
@property (nonatomic) bool hasIsInteractive;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSizeClass;
@property (nonatomic, retain) NSString *intentType;
@property (nonatomic) bool isInteractive;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *sizeClass;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleIdentifier;
- (bool)hasIntentType;
- (bool)hasIsInteractive;
- (bool)hasKey;
- (bool)hasSizeClass;
- (unsigned long long)hash;
- (id)intentType;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setHasIsInteractive:(bool)arg1;
- (void)setIntentType:(id)arg1;
- (void)setIsInteractive:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSizeClass:(id)arg1;
- (id)sizeClass;
- (void)writeTo:(id)arg1;

@end
