
@interface SIRINLUEXTERNALUsoNode : PBCodable <NSCopying> {
    NSString * _entityLabel;
    struct { 
        unsigned int usoElementId : 1; 
    }  _has;
    SIRICOMMONInt64Value * _integerPayload;
    NSMutableArray * _normalizedStringPayloads;
    SIRICOMMONStringValue * _stringPayload;
    unsigned int  _usoElementId;
    SIRICOMMONUInt32Value * _usoVerbElementId;
    NSString * _verbLabel;
}

@property (nonatomic, retain) NSString *entityLabel;
@property (nonatomic, readonly) bool hasEntityLabel;
@property (nonatomic, readonly) bool hasIntegerPayload;
@property (nonatomic, readonly) bool hasStringPayload;
@property (nonatomic) bool hasUsoElementId;
@property (nonatomic, readonly) bool hasUsoVerbElementId;
@property (nonatomic, readonly) bool hasVerbLabel;
@property (nonatomic, retain) SIRICOMMONInt64Value *integerPayload;
@property (nonatomic, retain) NSMutableArray *normalizedStringPayloads;
@property (nonatomic, retain) SIRICOMMONStringValue *stringPayload;
@property (nonatomic) unsigned int usoElementId;
@property (nonatomic, retain) SIRICOMMONUInt32Value *usoVerbElementId;
@property (nonatomic, retain) NSString *verbLabel;

+ (Class)normalizedStringPayloadsType;

- (void).cxx_destruct;
- (void)addNormalizedStringPayloads:(id)arg1;
- (void)clearNormalizedStringPayloads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityLabel;
- (bool)hasEntityLabel;
- (bool)hasIntegerPayload;
- (bool)hasStringPayload;
- (bool)hasUsoElementId;
- (bool)hasUsoVerbElementId;
- (bool)hasVerbLabel;
- (unsigned long long)hash;
- (id)integerPayload;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)normalizedStringPayloads;
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)normalizedStringPayloadsCount;
- (bool)readFrom:(id)arg1;
- (void)setEntityLabel:(id)arg1;
- (void)setHasUsoElementId:(bool)arg1;
- (void)setIntegerPayload:(id)arg1;
- (void)setNormalizedStringPayloads:(id)arg1;
- (void)setStringPayload:(id)arg1;
- (void)setUsoElementId:(unsigned int)arg1;
- (void)setUsoVerbElementId:(id)arg1;
- (void)setVerbLabel:(id)arg1;
- (id)stringPayload;
- (unsigned int)usoElementId;
- (id)usoVerbElementId;
- (id)verbLabel;
- (void)writeTo:(id)arg1;

@end
