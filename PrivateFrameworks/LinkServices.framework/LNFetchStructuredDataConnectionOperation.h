
@interface LNFetchStructuredDataConnectionOperation : LNInterfaceConnectionOperation {
    id /* block */  _completionHandler;
    NSArray * _entityIdentifiers;
    NSDictionary * _entityIdentifiersToStructuredData;
    long long  _typeIdentifier;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSArray *entityIdentifiers;
@property (nonatomic, retain) NSDictionary *entityIdentifiersToStructuredData;
@property (nonatomic, readonly) long long typeIdentifier;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)entityIdentifiers;
- (id)entityIdentifiersToStructuredData;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 typeIdentifier:(long long)arg2 entityIdentifiers:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEntityIdentifiersToStructuredData:(id)arg1;
- (void)start;
- (long long)typeIdentifier;

@end
