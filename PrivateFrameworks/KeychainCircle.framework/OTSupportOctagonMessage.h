
@interface OTSupportOctagonMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int supported : 1; 
    }  _has;
    int  _supported;
}

@property (nonatomic) bool hasSupported;
@property (nonatomic) int supported;

- (int)StringAsSupported:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSupported;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSupported:(bool)arg1;
- (void)setSupported:(int)arg1;
- (int)supported;
- (id)supportedAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
