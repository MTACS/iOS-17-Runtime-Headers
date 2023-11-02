
@interface HMMediaGroupProtoMediaGroupRole : PBCodable <NSCopying> {
    struct { 
        unsigned int role : 1; 
    }  _has;
    HMMediaGroupProtoMediaSystemRoles * _mediaSystem;
    int  _role;
}

@property (nonatomic, readonly) bool hasMediaSystem;
@property (nonatomic) bool hasRole;
@property (nonatomic, retain) HMMediaGroupProtoMediaSystemRoles *mediaSystem;
@property (nonatomic) int role;

- (void).cxx_destruct;
- (int)StringAsRole:(id)arg1;
- (void)clearOneofValuesForRole;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMediaSystem;
- (bool)hasRole;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mediaSystem;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)role;
- (id)roleAsString:(int)arg1;
- (void)setHasRole:(bool)arg1;
- (void)setMediaSystem:(id)arg1;
- (void)setRole:(int)arg1;
- (void)writeTo:(id)arg1;

@end
