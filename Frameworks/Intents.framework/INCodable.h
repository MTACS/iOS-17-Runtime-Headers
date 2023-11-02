
@interface INCodable : PBCodable <INWidgetPlistRepresentable, NSCopying> {
    NSMutableDictionary * _customValueForKeyDictionary;
    INCodableDescription * _objectDescription;
}

@property (setter=_setObjectDescription:, nonatomic, retain) INCodableDescription *_objectDescription;
@property (nonatomic, retain) NSMutableDictionary *customValueForKeyDictionary;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_UInt32ValueForAttribute:(id)arg1;
- (unsigned long long)_UInt64ValueForAttribute:(id)arg1;
- (bool)_boolValueForAttribute:(id)arg1;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 error:(id*)arg2;
- (id)_data;
- (id)_dataWithError:(id*)arg1;
- (id)_dictionaryRepresentationWithNullValues:(bool)arg1;
- (double)_doubleValueForAttribute:(id)arg1;
- (float)_floatValueForAttribute:(id)arg1;
- (id)_initWithCodableDescription:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (int)_int32ValueForAttribute:(id)arg1;
- (long long)_int64ValueForAttribute:(id)arg1;
- (bool)_isAttribute:(id)arg1 equalTo:(id)arg2;
- (bool)_isStringAttribute:(id)arg1 equalTo:(id)arg2;
- (id)_nonNilAttributes;
- (id)_nonNilRepeatedAttributes;
- (id)_objectDescription;
- (bool)_readFrom:(id)arg1 error:(id*)arg2;
- (void)_setData:(id)arg1 error:(id*)arg2;
- (void)_setEmptyArrayForNonNilRepeatedAttributes:(id)arg1;
- (void)_setObject:(id)arg1 forAttribute:(id)arg2;
- (void)_setObjectDescription:(id)arg1;
- (id)_valueForAttribute:(id)arg1;
- (id)_valueForAttribute:(id)arg1 ofClass:(Class)arg2;
- (bool)_writeTo:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customValueForKeyDictionary;
- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCodableDescription:(id)arg1 data:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidKey:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCustomValueForKeyDictionary:(id)arg1;
- (void)setNilValueForAllKeys;
- (void)setValue:(id)arg1 forPropertyNamed:(id)arg2;
- (id)valueForPropertyNamed:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;
- (void)writeTo:(id)arg1;

@end
