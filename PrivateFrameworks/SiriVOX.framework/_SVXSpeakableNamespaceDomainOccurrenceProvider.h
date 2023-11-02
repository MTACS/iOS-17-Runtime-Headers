
@interface _SVXSpeakableNamespaceDomainOccurrenceProvider : NSObject <AFSpeakableNamespaceProvider> {
    unsigned long long  _count;
    NSSet * _deferredMessageKeys;
    NSString * _domain;
}

@property (nonatomic) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSSet *deferredMessageKeys;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)providerForDomain:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)deferredMessageKeys;
- (id)domain;
- (void)setCount:(unsigned long long)arg1;
- (void)setDeferredMessageKeys:(id)arg1;
- (void)setDomain:(id)arg1;
- (id)stringForExpression:(id)arg1;

@end
