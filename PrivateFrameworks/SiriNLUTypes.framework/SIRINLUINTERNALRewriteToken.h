
@interface SIRINLUINTERNALRewriteToken : PBCodable <NSCopying> {
    double  _asrConfidence;
    unsigned int  _endIndex;
    struct { 
        unsigned int asrConfidence : 1; 
        unsigned int endIndex : 1; 
        unsigned int startIndex : 1; 
        unsigned int removeSpaceAfter : 1; 
    }  _has;
    NSString * _phoneSequence;
    bool  _removeSpaceAfter;
    unsigned int  _startIndex;
    NSString * _value;
}

@property (nonatomic) double asrConfidence;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) bool hasAsrConfidence;
@property (nonatomic) bool hasEndIndex;
@property (nonatomic, readonly) bool hasPhoneSequence;
@property (nonatomic) bool hasRemoveSpaceAfter;
@property (nonatomic) bool hasStartIndex;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *phoneSequence;
@property (nonatomic) bool removeSpaceAfter;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (double)asrConfidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endIndex;
- (bool)hasAsrConfidence;
- (bool)hasEndIndex;
- (bool)hasPhoneSequence;
- (bool)hasRemoveSpaceAfter;
- (bool)hasStartIndex;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phoneSequence;
- (bool)readFrom:(id)arg1;
- (bool)removeSpaceAfter;
- (void)setAsrConfidence:(double)arg1;
- (void)setEndIndex:(unsigned int)arg1;
- (void)setHasAsrConfidence:(bool)arg1;
- (void)setHasEndIndex:(bool)arg1;
- (void)setHasRemoveSpaceAfter:(bool)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (void)setPhoneSequence:(id)arg1;
- (void)setRemoveSpaceAfter:(bool)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (void)setValue:(id)arg1;
- (unsigned int)startIndex;
- (id)value;
- (void)writeTo:(id)arg1;

@end
