
@interface MTIDConfig : NSObject {
    NSMutableDictionary * _cache;
    NSMutableDictionary * _clientIdNamespacesByTopic;
    NSString * _defaultClientIdNamespace;
    NSString * _defaultUserIdNamespace;
    NSString * _performanceTopic;
    NSMutableDictionary * _userIdNamespacesByTopic;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic, retain) NSMutableDictionary *clientIdNamespacesByTopic;
@property (nonatomic, retain) NSString *defaultClientIdNamespace;
@property (nonatomic, retain) NSString *defaultUserIdNamespace;
@property (nonatomic, retain) NSString *performanceTopic;
@property (nonatomic, retain) NSMutableDictionary *userIdNamespacesByTopic;

- (void).cxx_destruct;
- (id)allKnownSchemes;
- (id)cache;
- (unsigned long long)calculateCombinedHashForNamespaces:(id)arg1;
- (id)clientIdNamespacesByTopic;
- (id)defaultClientIdNamespace;
- (id)defaultUserIdNamespace;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)namespaceForTopic:(id)arg1 idType:(long long)arg2;
- (id)performanceTopic;
- (id)schemeForNamespace:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setClientIdNamespacesByTopic:(id)arg1;
- (void)setDefaultClientIdNamespace:(id)arg1;
- (void)setDefaultUserIdNamespace:(id)arg1;
- (void)setPerformanceTopic:(id)arg1;
- (void)setUserIdNamespacesByTopic:(id)arg1;
- (id)userIdNamespacesByTopic;

@end
