
@interface DESBfloat16Transport : PBCodable <NSCopying> {
    unsigned int  _count;
    NSData * _data;
    struct { 
        unsigned int count : 1; 
    }  _has;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) bool hasData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setData:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
