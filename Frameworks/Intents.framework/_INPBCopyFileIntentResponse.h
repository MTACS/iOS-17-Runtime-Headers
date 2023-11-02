
@interface _INPBCopyFileIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBCopyFileIntentResponse> {
    _INPBString * _destinationName;
    _INPBString * _entityName;
    int  _entityType;
    struct { 
        unsigned int entityType : 1; 
        unsigned int overwrite : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _overwrite;
    bool  _success;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *destinationName;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasEntityType;
@property (nonatomic) bool hasOverwrite;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool overwrite;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (bool)hasDestinationName;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasOverwrite;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)overwrite;
- (bool)readFrom:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasOverwrite:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setOverwrite:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
