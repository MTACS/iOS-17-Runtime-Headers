
@interface HKCodableQuantityValueWithRange : PBCodable <NSCopying> {
    NSMutableArray * _codes;
    HKCodableQuantity * _quantityValue;
    HKCodableQuantity * _referenceRangeMax;
    HKCodableQuantity * _referenceRangeMin;
    NSString * _textualValue;
    NSString * _valueTitle;
}

@property (nonatomic, retain) NSMutableArray *codes;
@property (nonatomic, readonly) bool hasQuantityValue;
@property (nonatomic, readonly) bool hasReferenceRangeMax;
@property (nonatomic, readonly) bool hasReferenceRangeMin;
@property (nonatomic, readonly) bool hasTextualValue;
@property (nonatomic, readonly) bool hasValueTitle;
@property (nonatomic, retain) HKCodableQuantity *quantityValue;
@property (nonatomic, retain) HKCodableQuantity *referenceRangeMax;
@property (nonatomic, retain) HKCodableQuantity *referenceRangeMin;
@property (nonatomic, retain) NSString *textualValue;
@property (nonatomic, retain) NSString *valueTitle;

+ (Class)codeType;

- (void).cxx_destruct;
- (void)addCode:(id)arg1;
- (void)clearCodes;
- (id)codeAtIndex:(unsigned long long)arg1;
- (id)codes;
- (unsigned long long)codesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasQuantityValue;
- (bool)hasReferenceRangeMax;
- (bool)hasReferenceRangeMin;
- (bool)hasTextualValue;
- (bool)hasValueTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)quantityValue;
- (bool)readFrom:(id)arg1;
- (id)referenceRangeMax;
- (id)referenceRangeMin;
- (void)setCodes:(id)arg1;
- (void)setQuantityValue:(id)arg1;
- (void)setReferenceRangeMax:(id)arg1;
- (void)setReferenceRangeMin:(id)arg1;
- (void)setTextualValue:(id)arg1;
- (void)setValueTitle:(id)arg1;
- (id)textualValue;
- (id)valueTitle;
- (void)writeTo:(id)arg1;

@end
