
@interface STLocationStatusDomainDisplayNameTransformerProvider : NSObject <STStatusDomainClientDataTransformerProviding> {
    NSArray * _dynamicAttributions;
    NSMutableDictionary * _entityResolversByLocalization;
    NSMutableDictionary * _transformersByLocalization;
}

@property (nonatomic, copy) NSArray *dynamicAttributions;

- (void).cxx_destruct;
- (id)dataTransformerForClient:(id)arg1;
- (id)dynamicAttributions;
- (id)init;
- (void)setDynamicAttributions:(id)arg1;

@end
