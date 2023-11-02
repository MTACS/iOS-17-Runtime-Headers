
@interface HMDPersonModel : HMBModel

@property (retain) NSString *name;
@property (copy) NSSet *personLinks;
@property (retain) NSData *personLinksData;

+ (id)hmbProperties;
+ (id)sentinelParentUUID;

- (id)createPerson;
- (id)initWithPerson:(id)arg1;
- (id)personLinks;
- (void)setPersonLinks:(id)arg1;

@end
