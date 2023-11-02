
@interface SIRINLUINTERNALOverrideCollection : PBCodable <NSCopying> {
    NSString * _assetId;
    NSMutableArray * _componentOverrides;
    unsigned long long  _creationTimestampMsSinceUnixEpoch;
    struct { 
        unsigned int creationTimestampMsSinceUnixEpoch : 1; 
    }  _has;
    NSMutableArray * _parseOverrides;
    NSString * _version;
}

@property (nonatomic, retain) NSString *assetId;
@property (nonatomic, retain) NSMutableArray *componentOverrides;
@property (nonatomic) unsigned long long creationTimestampMsSinceUnixEpoch;
@property (nonatomic, readonly) bool hasAssetId;
@property (nonatomic) bool hasCreationTimestampMsSinceUnixEpoch;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *parseOverrides;
@property (nonatomic, retain) NSString *version;

+ (Class)componentOverridesType;
+ (Class)parseOverridesType;

- (void).cxx_destruct;
- (void)addComponentOverrides:(id)arg1;
- (void)addParseOverrides:(id)arg1;
- (id)assetId;
- (void)clearComponentOverrides;
- (void)clearParseOverrides;
- (id)componentOverrides;
- (id)componentOverridesAtIndex:(unsigned long long)arg1;
- (unsigned long long)componentOverridesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationTimestampMsSinceUnixEpoch;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetId;
- (bool)hasCreationTimestampMsSinceUnixEpoch;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parseOverrides;
- (id)parseOverridesAtIndex:(unsigned long long)arg1;
- (unsigned long long)parseOverridesCount;
- (bool)readFrom:(id)arg1;
- (void)setAssetId:(id)arg1;
- (void)setComponentOverrides:(id)arg1;
- (void)setCreationTimestampMsSinceUnixEpoch:(unsigned long long)arg1;
- (void)setHasCreationTimestampMsSinceUnixEpoch:(bool)arg1;
- (void)setParseOverrides:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
