
@interface SGM2DDLinkShown : PBCodable <NSCopying> {
    struct { 
        unsigned int interface : 1; 
    }  _has;
    int  _interface;
    NSString * _key;
}

@property (nonatomic) bool hasInterface;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) int interface;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (int)StringAsInterface:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInterface;
- (bool)hasKey;
- (unsigned long long)hash;
- (int)interface;
- (id)interfaceAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasInterface:(bool)arg1;
- (void)setInterface:(int)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
