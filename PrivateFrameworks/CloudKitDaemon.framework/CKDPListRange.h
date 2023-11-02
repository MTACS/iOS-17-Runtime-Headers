
@interface CKDPListRange : PBCodable <NSCopying> {
    CKDPListPosition * _left;
    CKDPListPosition * _right;
}

@property (nonatomic, readonly) bool hasLeft;
@property (nonatomic, readonly) bool hasRight;
@property (nonatomic, retain) CKDPListPosition *left;
@property (nonatomic, retain) CKDPListPosition *right;

- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLeft;
- (bool)hasRight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)left;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)right;
- (void)setLeft:(id)arg1;
- (void)setRight:(id)arg1;
- (void)writeTo:(id)arg1;

@end
