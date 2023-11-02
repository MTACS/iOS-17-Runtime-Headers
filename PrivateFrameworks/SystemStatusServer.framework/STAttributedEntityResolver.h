
@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving> {
    STReferenceCountedCache * _cache;
    NSArray * _dynamicAttributions;
    STExecutableIdentityResolver * _identityResolver;
    NSArray * _preferredLocalizations;
}

@property (nonatomic, copy) NSArray *dynamicAttributions;
@property (nonatomic, readonly, copy) NSArray *preferredLocalizations;

- (void).cxx_destruct;
- (id)beginBatchResolutionSession;
- (id)dynamicAttributions;
- (id)init;
- (id)initWithPreferredLocalizations:(id)arg1;
- (id)preferredLocalizations;
- (id)resolveEntity:(id)arg1;
- (void)setDynamicAttributions:(id)arg1;

@end
