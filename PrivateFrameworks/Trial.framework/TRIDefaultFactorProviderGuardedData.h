
@interface TRIDefaultFactorProviderGuardedData : NSObject {
    NSMutableDictionary * containerIds;
    NSMutableDictionary * factorProviders;
    TRINamespaceResolver * namespaceResolver;
}

- (void).cxx_destruct;

@end
