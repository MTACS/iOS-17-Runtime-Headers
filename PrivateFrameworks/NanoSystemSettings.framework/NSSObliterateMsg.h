
@interface NSSObliterateMsg : PBCodable <NSCopying> {
    bool  _capability;
    struct { 
        unsigned int capability : 1; 
    }  _has;
}

@property (nonatomic) bool capability;
@property (nonatomic) bool hasCapability;

- (bool)capability;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCapability;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCapability:(bool)arg1;
- (void)setHasCapability:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
