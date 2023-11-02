
@interface _INPBOpenFileIntent : PBCodable <NSCopying, NSSecureCoding, _INPBOpenFileIntent> {
    _INPBString * _appId;
    _INPBString * _entityName;
    int  _entityType;
    struct { 
        unsigned int entityType : 1; 
        unsigned int scope : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _properties;
    int  _scope;
    _INPBString * _scopeEntityName;
}

@property (nonatomic, retain) _INPBString *appId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasScope;
@property (nonatomic, readonly) bool hasScopeEntityName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (nonatomic) int scope;
@property (nonatomic, retain) _INPBString *scopeEntityName;
@property (readonly) Class superclass;

+ (Class)propertiesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsScope:(id)arg1;
- (void)addProperties:(id)arg1;
- (id)appId;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (bool)hasAppId;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (bool)hasScope;
- (bool)hasScopeEntityName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (int)scope;
- (id)scopeAsString:(int)arg1;
- (id)scopeEntityName;
- (void)setAppId:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasScope:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setScope:(int)arg1;
- (void)setScopeEntityName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
