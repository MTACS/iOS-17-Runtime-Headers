
@interface _INPBCopyFileIntent : PBCodable <NSCopying, NSSecureCoding, _INPBCopyFileIntent> {
    _INPBString * _destinationName;
    int  _destinationType;
    _INPBString * _entityName;
    int  _entityType;
    struct { 
        unsigned int destinationType : 1; 
        unsigned int entityType : 1; 
        unsigned int sourceType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _properties;
    _INPBString * _sourceName;
    int  _sourceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *destinationName;
@property (nonatomic) int destinationType;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic) bool hasDestinationType;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSourceName;
@property (nonatomic) bool hasSourceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (nonatomic, retain) _INPBString *sourceName;
@property (nonatomic) int sourceType;
@property (readonly) Class superclass;

+ (Class)propertiesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsSourceType:(id)arg1;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationName;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (bool)hasDestinationName;
- (bool)hasDestinationType;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (bool)hasSourceName;
- (bool)hasSourceType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasSourceType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceType:(int)arg1;
- (id)sourceName;
- (int)sourceType;
- (id)sourceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
