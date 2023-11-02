
@interface HDCodableMessageVersion : PBCodable <NSCopying> {
    int  _compatibilityVersion;
    int  _entityVersion;
    struct { 
        unsigned int compatibilityVersion : 1; 
        unsigned int entityVersion : 1; 
    }  _has;
}

@property (nonatomic) int compatibilityVersion;
@property (nonatomic) int entityVersion;
@property (nonatomic) bool hasCompatibilityVersion;
@property (nonatomic) bool hasEntityVersion;

- (int)compatibilityVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entityVersion;
- (bool)hasCompatibilityVersion;
- (bool)hasEntityVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompatibilityVersion:(int)arg1;
- (void)setEntityVersion:(int)arg1;
- (void)setHasCompatibilityVersion:(bool)arg1;
- (void)setHasEntityVersion:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
