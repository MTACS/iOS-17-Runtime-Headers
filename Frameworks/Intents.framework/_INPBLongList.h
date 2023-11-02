
@interface _INPBLongList : PBCodable <NSCopying, NSSecureCoding, _INPBLongList> {
    _INPBCondition * _conditionType;
    NSArray * _dataStrings;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBCondition *conditionType;
@property (nonatomic, copy) NSArray *dataStrings;
@property (nonatomic, readonly) unsigned long long dataStringsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasConditionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)dataStringType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDataString:(id)arg1;
- (void)clearDataStrings;
- (id)conditionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataStringAtIndex:(unsigned long long)arg1;
- (id)dataStrings;
- (unsigned long long)dataStringsCount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConditionType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditionType:(id)arg1;
- (void)setDataStrings:(id)arg1;
- (void)writeTo:(id)arg1;

@end
