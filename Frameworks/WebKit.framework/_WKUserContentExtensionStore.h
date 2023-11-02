
@interface _WKUserContentExtensionStore : NSObject <WKObject> {
    struct RetainPtr<WKContentRuleListStore> { 
        void *m_ptr; 
    }  _contentRuleListStore;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) WKContentRuleListStore *_contentRuleListStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultStore;
+ (id)storeWithURL:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_contentRuleListStore;
- (id)_initWithWKContentRuleListStore:(id)arg1;
- (void)_invalidateContentExtensionVersionForIdentifier:(id)arg1;
- (void)_removeAllContentExtensions;
- (void)compileContentExtensionForIdentifier:(id)arg1 encodedContentExtension:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)lookupContentExtensionForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
