
@interface TRIGloballyAvailableNamespaces : NSObject {
    TRIKVStore * _kvStore;
}

- (void).cxx_destruct;
- (id)initWithKVStore:(id)arg1;
- (id)namespaces;
- (bool)setNamespaces:(id)arg1;

@end
