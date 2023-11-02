
@interface INCodableAttributeRelationship : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSSecureCoding> {
    INCodableAttribute * _codableAttribute;
    NSDictionary * _originalDictionary;
    INCodableAttribute * _parentCodableAttribute;
    unsigned long long  _relation;
    NSArray * _values;
}

@property (nonatomic, readonly) INCodableDescription *_codableDescription;
@property (setter=_setOriginalDictionary:, nonatomic, retain) NSDictionary *_originalDictionary;
@property (nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) INCodableAttribute *parentCodableAttribute;
@property (nonatomic) unsigned long long relation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class valueClass;
@property (nonatomic, retain) NSArray *values;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionParentNameKey;
- (id)__INCodableDescriptionPredicateNameKey;
- (id)__INCodableDescriptionPredicateValueKey;
- (id)__INCodableDescriptionPredicateValuesKey;
- (id)__INIntentResponseCodableDescriptionParentNameKey;
- (id)__INIntentResponseCodableDescriptionPredicateNameKey;
- (id)__INIntentResponseCodableDescriptionPredicateValueKey;
- (id)__INIntentResponseCodableDescriptionPredicateValuesKey;
- (id)__INTypeCodableDescriptionParentNameKey;
- (id)__INTypeCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionPredicateValueKey;
- (id)__INTypeCodableDescriptionPredicateValuesKey;
- (id)_codableDescription;
- (void)_establishRelationship;
- (id)_originalDictionary;
- (void)_setOriginalDictionary:(id)arg1;
- (id)codableAttribute;
- (bool)compareValue:(id)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableAttribute:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parentCodableAttribute;
- (unsigned long long)relation;
- (void)setCodableAttribute:(id)arg1;
- (void)setParentCodableAttribute:(id)arg1;
- (void)setRelation:(unsigned long long)arg1;
- (void)setValues:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (Class)valueClass;
- (id)values;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
