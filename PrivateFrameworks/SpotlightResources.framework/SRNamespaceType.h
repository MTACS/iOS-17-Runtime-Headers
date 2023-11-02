
@interface SRNamespaceType : NSObject {
    NSString * _namespaceId;
    NSString * _namespaceName;
    NSMutableSet * _parameterNames;
}

@property (nonatomic, copy) NSString *namespaceId;
@property (nonatomic, copy) NSString *namespaceName;
@property (nonatomic, copy) NSSet *parameterNames;

- (void).cxx_destruct;
- (void)addParameterName:(id)arg1;
- (id)init;
- (id)namespaceId;
- (id)namespaceName;
- (id)parameterNames;
- (void)setNamespaceId:(id)arg1;
- (void)setNamespaceName:(id)arg1;
- (void)setParameterNames:(id)arg1;

@end
