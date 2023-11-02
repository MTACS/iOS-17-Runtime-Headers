
@interface PBBProtoApplicationInstallRestrictionResponse : PBCodable <NSCopying> {
    bool  _allowed;
    struct { 
        unsigned int allowed : 1; 
    }  _has;
}

@property (nonatomic) bool allowed;
@property (nonatomic) bool hasAllowed;

- (bool)allowed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAllowed:(bool)arg1;
- (void)setHasAllowed:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
