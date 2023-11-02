
@interface SRTrialConfiguration : NSObject {
    NSMutableDictionary * _namespaceDescription;
    NSMutableDictionary * _namespaceMap;
    NSMutableDictionary * _parameterMap;
    NSMutableDictionary * _properties;
}

@property (nonatomic, readonly) NSDictionary *namespaceDescription;

+ (id)configuration;

- (void).cxx_destruct;
- (void)clear;
- (id)clientsForNamespace:(id)arg1;
- (id)init;
- (id)namespaceDescription;
- (id)namespaceTypes;
- (id)namespaceTypesForClient:(id)arg1;
- (id)namespacesForClient:(id)arg1;
- (void)setParameterName:(id)arg1 namespaceId:(id)arg2;
- (void)setProperties:(id)arg1 client:(id)arg2;

@end
