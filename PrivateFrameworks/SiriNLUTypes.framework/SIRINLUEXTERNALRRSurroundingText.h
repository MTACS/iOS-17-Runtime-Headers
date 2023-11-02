
@interface SIRINLUEXTERNALRRSurroundingText : PBCodable <NSCopying> {
    SIRINLUEXTERNALRRBoundingBox * _boundingBox;
    NSString * _text;
}

@property (nonatomic, retain) SIRINLUEXTERNALRRBoundingBox *boundingBox;
@property (nonatomic, readonly) bool hasBoundingBox;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)boundingBox;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBoundingBox;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoundingBox:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)writeTo:(id)arg1;

@end
