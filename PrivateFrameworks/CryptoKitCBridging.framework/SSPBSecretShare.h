
@interface SSPBSecretShare : PBCodable <NSCopying> {
    NSData * _associatedData;
    NSData * _ciphertext;
    struct { 
        unsigned int threshold : 1; 
    }  _has;
    NSData * _iv;
    unsigned int  _shareX;
    NSData * _shareY;
    NSData * _tag;
    unsigned int  _threshold;
    unsigned int  _version;
}

@property (nonatomic, retain) NSData *associatedData;
@property (nonatomic, retain) NSData *ciphertext;
@property (nonatomic, readonly) bool hasAssociatedData;
@property (nonatomic) bool hasThreshold;
@property (nonatomic, retain) NSData *iv;
@property (nonatomic) unsigned int shareX;
@property (nonatomic, retain) NSData *shareY;
@property (nonatomic, retain) NSData *tag;
@property (nonatomic) unsigned int threshold;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (id)associatedData;
- (id)ciphertext;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssociatedData;
- (bool)hasThreshold;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)iv;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedData:(id)arg1;
- (void)setCiphertext:(id)arg1;
- (void)setHasThreshold:(bool)arg1;
- (void)setIv:(id)arg1;
- (void)setShareX:(unsigned int)arg1;
- (void)setShareY:(id)arg1;
- (void)setTag:(id)arg1;
- (void)setThreshold:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)shareX;
- (id)shareY;
- (id)tag;
- (unsigned int)threshold;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
