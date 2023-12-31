
@interface PBBProtoDidMakeAutoLockChoice : PBCodable <NSCopying> {
    bool  _accept;
    struct { 
        unsigned int accept : 1; 
    }  _has;
}

@property (nonatomic) bool accept;
@property (nonatomic) bool hasAccept;

- (bool)accept;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccept;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccept:(bool)arg1;
- (void)setHasAccept:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
