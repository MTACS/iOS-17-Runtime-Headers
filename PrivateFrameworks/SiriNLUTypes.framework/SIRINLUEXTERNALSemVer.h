
@interface SIRINLUEXTERNALSemVer : PBCodable <NSCopying> {
    struct { 
        unsigned int majorVersion : 1; 
        unsigned int minorVersion : 1; 
        unsigned int patchVersion : 1; 
    }  _has;
    unsigned int  _majorVersion;
    unsigned int  _minorVersion;
    unsigned int  _patchVersion;
}

@property (nonatomic) bool hasMajorVersion;
@property (nonatomic) bool hasMinorVersion;
@property (nonatomic) bool hasPatchVersion;
@property (nonatomic) unsigned int majorVersion;
@property (nonatomic) unsigned int minorVersion;
@property (nonatomic) unsigned int patchVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMajorVersion;
- (bool)hasMinorVersion;
- (bool)hasPatchVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)majorVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minorVersion;
- (unsigned int)patchVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasMajorVersion:(bool)arg1;
- (void)setHasMinorVersion:(bool)arg1;
- (void)setHasPatchVersion:(bool)arg1;
- (void)setMajorVersion:(unsigned int)arg1;
- (void)setMinorVersion:(unsigned int)arg1;
- (void)setPatchVersion:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
