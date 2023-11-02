
@interface CPLTransportScopeMapping : NSObject {
    bool  _hasStagingScopes;
    NSMutableDictionary * _mapping;
    NSMutableDictionary * _sharedScopeIdentifierMapping;
    <CPLTransportScopeTranslator> * _translator;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) bool hasStagingScopes;
@property (nonatomic, readonly) <CPLTransportScopeTranslator> *translator;

- (void).cxx_destruct;
- (bool)_addAllTransportScopesForScope:(id)arg1 scopes:(id)arg2 allowsTentativeTransportScope:(bool)arg3 useStagingScopeIfNecessary:(bool)arg4 error:(id*)arg5;
- (bool)_addTransportScopeForScope:(id)arg1 scopes:(id)arg2 allowsTentativeTransportScope:(bool)arg3 useStagingScopeIfNecessary:(bool)arg4 error:(id*)arg5;
- (bool)_checkTransportScopeForScopeIdentifier:(id)arg1 hasConcreteScope:(bool*)arg2 error:(id*)arg3;
- (void)addConcreteScope:(id)arg1 forScopeWithIdentifier:(id)arg2;
- (void)addTransportScope:(id)arg1 forScopeWithIdentifier:(id)arg2;
- (bool)addTransportScopeForScope:(id)arg1 scopes:(id)arg2 allowsTentativeTransportScope:(bool)arg3 useStagingScopeIfNecessary:(bool)arg4 error:(id*)arg5;
- (bool)addTransportScopeForScopeIdentifier:(id)arg1 scopes:(id)arg2 useStagingScopeIfNecessary:(bool)arg3 error:(id*)arg4;
- (id)concreteScopeForScopeWithIdentifier:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateConcreteScopesWithBlock:(id /* block */)arg1;
- (bool)hasConcreteScopeForScopeWithIdentifier:(id)arg1;
- (bool)hasStagingScopes;
- (id)initWithTranslator:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)redactedDescription;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setSharedScopeIdentifier:(id)arg1 forScopeWithIdentifier:(id)arg2;
- (id)sharedScopeIdentifierForScopeWithIdentifier:(id)arg1;
- (bool)shouldSetSharedScopeIdentifierForScopeWithIdentifier:(id)arg1;
- (id)translator;
- (void)updateWithTransportScopeMapping:(id)arg1;

@end
