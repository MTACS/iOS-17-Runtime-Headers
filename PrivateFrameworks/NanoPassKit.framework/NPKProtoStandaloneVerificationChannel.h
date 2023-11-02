
@interface NPKProtoStandaloneVerificationChannel : PBCodable <NSCopying> {
    NSString * _contactPoint;
    struct { 
        unsigned int type : 1; 
        unsigned int requiresUserInteraction : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _organizationName;
    bool  _requiresUserInteraction;
    NSString * _sourceAddress;
    int  _type;
    NSString * _typeDescription;
    NSString * _typeDescriptionUnlocalized;
}

@property (nonatomic, retain) NSString *contactPoint;
@property (nonatomic, readonly) bool hasContactPoint;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasOrganizationName;
@property (nonatomic) bool hasRequiresUserInteraction;
@property (nonatomic, readonly) bool hasSourceAddress;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasTypeDescription;
@property (nonatomic, readonly) bool hasTypeDescriptionUnlocalized;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic) bool requiresUserInteraction;
@property (nonatomic, retain) NSString *sourceAddress;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *typeDescription;
@property (nonatomic, retain) NSString *typeDescriptionUnlocalized;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)contactPoint;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContactPoint;
- (bool)hasIdentifier;
- (bool)hasOrganizationName;
- (bool)hasRequiresUserInteraction;
- (bool)hasSourceAddress;
- (bool)hasType;
- (bool)hasTypeDescription;
- (bool)hasTypeDescriptionUnlocalized;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)organizationName;
- (bool)readFrom:(id)arg1;
- (bool)requiresUserInteraction;
- (void)setContactPoint:(id)arg1;
- (void)setHasRequiresUserInteraction:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setRequiresUserInteraction:(bool)arg1;
- (void)setSourceAddress:(id)arg1;
- (void)setType:(int)arg1;
- (void)setTypeDescription:(id)arg1;
- (void)setTypeDescriptionUnlocalized:(id)arg1;
- (id)sourceAddress;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)typeDescription;
- (id)typeDescriptionUnlocalized;
- (void)writeTo:(id)arg1;

@end
