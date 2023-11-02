
@interface SGSM2EventResultInSpotlight : PBCodable <NSCopying> {
    struct { 
        unsigned int visible : 1; 
    }  _has;
    NSString * _key;
    bool  _visible;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasVisible;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasVisible;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasVisible:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setVisible:(bool)arg1;
- (bool)visible;
- (void)writeTo:(id)arg1;

@end
