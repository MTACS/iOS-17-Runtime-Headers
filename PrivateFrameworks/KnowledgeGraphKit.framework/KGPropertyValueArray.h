
@interface KGPropertyValueArray : NSObject {
    KGElementIdentifierSet * _elementIdentifiers;
    NSArray * _values;
}

@property (nonatomic, readonly) KGElementIdentifierSet *elementIdentifiers;
@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (id)elementIdentifiers;
- (void)enumerateUsingBlock:(id /* block */)arg1;
- (id)initWithValues:(id)arg1 elementIdentifiers:(id)arg2;
- (id)values;

@end
