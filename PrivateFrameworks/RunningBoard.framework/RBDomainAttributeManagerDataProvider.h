
@interface RBDomainAttributeManagerDataProvider : NSObject <RBDomainAttributeDataProviding> {
    NSString * _path;
    NSDictionary * _rawTemplates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)templatesByDomain;
- (id)validDomains;
- (id)validationErrors;

@end
