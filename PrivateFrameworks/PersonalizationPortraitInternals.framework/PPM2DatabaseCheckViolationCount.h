
@interface PPM2DatabaseCheckViolationCount : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    struct { 
        unsigned int pragmaCheckType : 1; 
        unsigned int schemaVersion : 1; 
    }  _has;
    int  _pragmaCheckType;
    unsigned int  _schemaVersion;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasPragmaCheckType;
@property (nonatomic) bool hasSchemaVersion;
@property (nonatomic) int pragmaCheckType;
@property (nonatomic) unsigned int schemaVersion;

- (void).cxx_destruct;
- (int)StringAsPragmaCheckType:(id)arg1;
- (id)activeTreatments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveTreatments;
- (bool)hasPragmaCheckType;
- (bool)hasSchemaVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pragmaCheckType;
- (id)pragmaCheckTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)schemaVersion;
- (void)setActiveTreatments:(id)arg1;
- (void)setHasPragmaCheckType:(bool)arg1;
- (void)setHasSchemaVersion:(bool)arg1;
- (void)setPragmaCheckType:(int)arg1;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
