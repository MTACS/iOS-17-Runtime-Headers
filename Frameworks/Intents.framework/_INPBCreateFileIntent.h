
@interface _INPBCreateFileIntent : PBCodable <NSCopying, NSSecureCoding, _INPBCreateFileIntent> {
    _INPBString * _destinationName;
    int  _destinationType;
    _INPBString * _entityName;
    int  _entityType;
    struct { 
        unsigned int destinationType : 1; 
        unsigned int entityType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
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
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsEntityType:(id)arg1;
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
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
