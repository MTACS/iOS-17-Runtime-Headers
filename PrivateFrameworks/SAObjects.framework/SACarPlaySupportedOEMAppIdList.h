
@interface SACarPlaySupportedOEMAppIdList : SADomainObject

@property (nonatomic, copy) NSArray *appIds;

+ (id)carPlaySupportedOEMAppIdList;
+ (id)carPlaySupportedOEMAppIdListWithDictionary:(id)arg1 context:(id)arg2;

- (id)appIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAppIds:(id)arg1;

@end
