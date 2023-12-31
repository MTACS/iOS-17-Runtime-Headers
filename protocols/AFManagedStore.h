
@protocol AFManagedStore <NSObject>

@required

- (NSData *)dataForKey:(NSString *)arg1 inKnowledgeStoreWithName:(NSString *)arg2;
- (NSDictionary *)domainObjectForKey:(NSString *)arg1;
- (void)resetKnowledgeStoreWithName:(NSString *)arg1;
- (void)setData:(NSData *)arg1 forKey:(NSString *)arg2 inKnowledgeStoreWithName:(NSString *)arg3;
- (void)setDomainObject:(NSDictionary *)arg1 forKey:(NSString *)arg2;

@end
