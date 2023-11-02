
@interface MAElementFilter : NSObject {
    KGElementIdentifierSet * _domains;
    NSSet * _labels;
    NSDictionary * _properties;
}

@property (nonatomic, readonly, copy) KGElementIdentifierSet *domains;
@property (nonatomic, readonly) NSArray *kgOptionalLabels;
@property (nonatomic, readonly) NSArray *kgRequiredLabels;
@property (nonatomic, readonly, copy) NSSet *labels;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSString *visualString;

+ (id)any;
+ (bool)scanDomains:(out id*)arg1 withScanner:(id)arg2;
+ (bool)scanElementFilterLabels:(out id*)arg1 domains:(out id*)arg2 properties:(out id*)arg3 withScanner:(id)arg4;
+ (id)scanFilterWithScanner:(id)arg1;
+ (bool)scanInstance:(out id*)arg1 withScanner:(id)arg2;
+ (bool)scanLabels:(out id*)arg1 withScanner:(id)arg2;
+ (bool)scanProperties:(out id*)arg1 withScanner:(id)arg2;
+ (bool)scanPropertyOption:(out id*)arg1 withScanner:(id)arg2;
+ (bool)scanPropertyValue:(out id*)arg1 withScanner:(id)arg2;

- (void).cxx_destruct;
- (void)_appendPropertyOption:(id)arg1 toString:(id)arg2;
- (void)appendVisualStringToString:(id)arg1;
- (id)description;
- (id)domains;
- (id)filterBySettingProperties:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 domains:(id)arg2 properties:(id)arg3;
- (id)initWithLabels:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabels:(id)arg1 domains:(id)arg2 properties:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)kgOptionalLabels;
- (id)kgRequiredLabels;
- (id)labels;
- (bool)matchesDomainOfElement:(id)arg1;
- (bool)matchesElement:(id)arg1;
- (bool)matchesLabelOfElement:(id)arg1;
- (bool)matchesPropertiesOfElement:(id)arg1;
- (id)properties;
- (id)visualString;

@end
