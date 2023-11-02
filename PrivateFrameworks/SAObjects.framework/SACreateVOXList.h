
@interface SACreateVOXList : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *introductions;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic) long long pageSize;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)createVOXList;
+ (id)createVOXListWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)introductions;
- (id)items;
- (long long)pageSize;
- (bool)requiresResponse;
- (void)setDomainName:(id)arg1;
- (void)setIntroductions:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setPageSize:(long long)arg1;

@end
