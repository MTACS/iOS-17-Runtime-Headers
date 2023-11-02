
@interface _INCodableAttributeRelationshipValueTransformer : NSValueTransformer {
    INCodableAttribute * _codableAttribute;
}

@property (nonatomic, readonly) INCodableAttribute *codableAttribute;

- (void).cxx_destruct;
- (id)codableAttribute;
- (id)initWithCodableAttribute:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
