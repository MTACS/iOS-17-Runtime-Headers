
@interface RMSPairingCredentialsMessage : PBCodable <NSCopying> {
    unsigned int  _characterCount;
    struct { 
        unsigned int characterCount : 1; 
        unsigned int requirementType : 1; 
    }  _has;
    int  _requirementType;
}

@property (nonatomic) unsigned int characterCount;
@property (nonatomic) bool hasCharacterCount;
@property (nonatomic) bool hasRequirementType;
@property (nonatomic) int requirementType;

- (unsigned int)characterCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCharacterCount;
- (bool)hasRequirementType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requirementType;
- (void)setCharacterCount:(unsigned int)arg1;
- (void)setHasCharacterCount:(bool)arg1;
- (void)setHasRequirementType:(bool)arg1;
- (void)setRequirementType:(int)arg1;
- (void)writeTo:(id)arg1;

@end