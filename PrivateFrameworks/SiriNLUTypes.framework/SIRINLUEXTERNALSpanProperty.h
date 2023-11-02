
@interface SIRINLUEXTERNALSpanProperty : PBCodable <NSCopying> {
    NSString * _key;
    SIRICOMMONFloatValue * _valueFloat;
    SIRICOMMONInt32Value * _valueInt;
    SIRICOMMONStringValue * _valueString;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasValueFloat;
@property (nonatomic, readonly) bool hasValueInt;
@property (nonatomic, readonly) bool hasValueString;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) SIRICOMMONFloatValue *valueFloat;
@property (nonatomic, retain) SIRICOMMONInt32Value *valueInt;
@property (nonatomic, retain) SIRICOMMONStringValue *valueString;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasValueFloat;
- (bool)hasValueInt;
- (bool)hasValueString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValueFloat:(id)arg1;
- (void)setValueInt:(id)arg1;
- (void)setValueString:(id)arg1;
- (id)valueFloat;
- (id)valueInt;
- (id)valueString;
- (void)writeTo:(id)arg1;

@end
