
@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying> {
    id /* block */  _completion;
    RERelevanceProvider * _provider;
}

@property (nonatomic, readonly) bool allProviders;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) RERelevanceProvider *provider;

+ (id)immediateUpdateForAllProviders;
+ (id)immediateUpdateForProvider:(id)arg1;
+ (id)scheduledUpdateForAllProvidersAtDate:(id)arg1;
+ (id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2;

- (void).cxx_destruct;
- (bool)allProviders;
- (id /* block */)completion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithProvider:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)provider;
- (void)setCompletion:(id /* block */)arg1;

@end
