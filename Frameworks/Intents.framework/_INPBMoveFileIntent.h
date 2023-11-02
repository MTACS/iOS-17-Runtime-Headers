
@interface _INPBMoveFileIntent : PBCodable <NSCopying, NSSecureCoding, _INPBMoveFileIntent> {
    _INPBString * _destinationName;
    int  _destinationType;
    NSArray * _entityNames;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _entityTypes;
    struct { 
        unsigned int destinationType : 1; 
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
@property (nonatomic, copy) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (nonatomic, readonly) int*entityTypes;
@property (nonatomic, readonly) unsigned long long entityTypesCount;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic) bool hasDestinationType;
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

+ (Class)entityNameType;
+ (Class)propertiesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsEntityTypes:(id)arg1;
- (int)StringAsSourceType:(id)arg1;
- (void)addEntityName:(id)arg1;
- (void)addEntityType:(int)arg1;
- (void)addProperties:(id)arg1;
- (void)clearEntityNames;
- (void)clearEntityTypes;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)destinationName;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (id)entityNames;
- (unsigned long long)entityNamesCount;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (int*)entityTypes;
- (id)entityTypesAsString:(int)arg1;
- (unsigned long long)entityTypesCount;
- (bool)hasDestinationName;
- (bool)hasDestinationType;
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
- (void)setEntityNames:(id)arg1;
- (void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasDestinationType:(bool)arg1;
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
