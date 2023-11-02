
@interface _HKXMLExtractorElement : NSObject {
    NSDictionary * _specificationAttributes;
    NSString * _specificationElement;
}

@property (readonly, copy) NSDictionary *specificationAttributes;
@property (readonly, copy) NSString *specificationElement;

- (void).cxx_destruct;
- (id)initWithElementName:(id)arg1 attributes:(id)arg2;
- (id)initWithTagSpecification:(id)arg1;
- (bool)matchesElement:(id)arg1;
- (id)specificationAttributes;
- (id)specificationElement;

@end
