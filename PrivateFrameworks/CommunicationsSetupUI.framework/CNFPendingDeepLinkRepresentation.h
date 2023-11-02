
@interface CNFPendingDeepLinkRepresentation : NSObject {
    id /* block */  _completion;
    NSDictionary * _resourceDictionary;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSDictionary *resourceDictionary;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)resourceDictionary;
- (void)setCompletion:(id /* block */)arg1;
- (void)setResourceDictionary:(id)arg1;

@end
