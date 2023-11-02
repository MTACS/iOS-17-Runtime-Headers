
@interface DESDataTransport : PBCodable <NSCopying> {
    DESBfloat16Transport * _bfloat16;
    DESBinary32Transport * _binary32;
    DESBinary64Transport * _binary64;
}

@property (nonatomic, retain) DESBfloat16Transport *bfloat16;
@property (nonatomic, retain) DESBinary32Transport *binary32;
@property (nonatomic, retain) DESBinary64Transport *binary64;
@property (nonatomic, readonly) bool hasBfloat16;
@property (nonatomic, readonly) bool hasBinary32;
@property (nonatomic, readonly) bool hasBinary64;

- (void).cxx_destruct;
- (id)bfloat16;
- (id)binary32;
- (id)binary64;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBfloat16;
- (bool)hasBinary32;
- (bool)hasBinary64;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBfloat16:(id)arg1;
- (void)setBinary32:(id)arg1;
- (void)setBinary64:(id)arg1;
- (void)writeTo:(id)arg1;

@end
