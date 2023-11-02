
@interface _HKXMLExtractorSpecification : NSObject {
    NSArray * _specificationElements;
    NSString * _specificationString;
}

@property (readonly, copy) NSArray *specificationElements;
@property (readonly, copy) NSString *specificationString;

- (void).cxx_destruct;
- (id)initWithSpecificationString:(id)arg1;
- (bool)matchesElementStack:(id)arg1;
- (id)specificationElements;
- (id)specificationString;

@end
