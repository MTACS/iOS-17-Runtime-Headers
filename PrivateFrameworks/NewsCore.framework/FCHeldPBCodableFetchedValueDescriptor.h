
@interface FCHeldPBCodableFetchedValueDescriptor : FCFetchedValueDescriptor {
    Class  _codableClass;
    <FCContentContext> * _contentContext;
    FCFetchedValueManager * _resourceConfigurationManager;
}

@property (nonatomic, readonly) Class codableClass;
@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (nonatomic, readonly) FCFetchedValueManager *resourceConfigurationManager;

- (void).cxx_destruct;
- (void)_processFetchOperationResult:(id)arg1 withBlock:(id /* block */)arg2;
- (Class)codableClass;
- (id)contentContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithCodableClass:(Class)arg1 contentContext:(id)arg2 resourceConfigurationManager:(id)arg3;
- (id)inputManagers;
- (bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)resourceConfigurationManager;

@end
