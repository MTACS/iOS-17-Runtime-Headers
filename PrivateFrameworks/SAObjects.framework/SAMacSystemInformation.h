
@interface SAMacSystemInformation : SADomainObject

@property (nonatomic, copy) NSString *query;

+ (id)systemInformation;
+ (id)systemInformationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)query;
- (void)setQuery:(id)arg1;

@end
