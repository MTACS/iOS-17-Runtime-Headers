
@interface SIRINLUEXTERNALRewriteMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int rewriteType : 1; 
    }  _has;
    int  _rewriteType;
    NSString * _rewrittenUtterance;
}

@property (nonatomic) bool hasRewriteType;
@property (nonatomic, readonly) bool hasRewrittenUtterance;
@property (nonatomic) int rewriteType;
@property (nonatomic, retain) NSString *rewrittenUtterance;

- (void).cxx_destruct;
- (int)StringAsRewriteType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRewriteType;
- (bool)hasRewrittenUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rewriteType;
- (id)rewriteTypeAsString:(int)arg1;
- (id)rewrittenUtterance;
- (void)setHasRewriteType:(bool)arg1;
- (void)setRewriteType:(int)arg1;
- (void)setRewrittenUtterance:(id)arg1;
- (void)writeTo:(id)arg1;

@end
