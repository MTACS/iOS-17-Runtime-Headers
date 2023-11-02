
@interface FCFlintResourceManager : NSObject {
    <FCContentContext> * _context;
}

- (void).cxx_destruct;
- (id)cachedResourceWithIdentifier:(id)arg1;
- (id)cachedResourcesWithIdentifiers:(id)arg1;
- (id)fetchFontResourcesWithIdentifiers:(id)arg1 downloadAssets:(bool)arg2 relativePriority:(long long)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(bool)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (id)initWithContext:(id)arg1;

@end
