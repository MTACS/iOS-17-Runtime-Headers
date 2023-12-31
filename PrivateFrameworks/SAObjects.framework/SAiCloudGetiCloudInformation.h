
@interface SAiCloudGetiCloudInformation : SADomainCommand

@property (nonatomic, copy) NSString *query;

+ (id)getiCloudInformation;
+ (id)getiCloudInformationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)query;
- (bool)requiresResponse;
- (void)setQuery:(id)arg1;

@end
