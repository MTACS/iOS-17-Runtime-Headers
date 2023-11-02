
@interface WKContentRuleListStore : NSObject <WKObject> {
    struct ObjectStorage<API::ContentRuleListStore> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _contentRuleListStore;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultStore;
+ (id)defaultStoreWithLegacyFilename;
+ (id)storeWithURL:(id)arg1;
+ (id)storeWithURLAndLegacyFilename:(id)arg1;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)_getContentRuleListSourceForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_invalidateContentRuleListVersionForIdentifier:(id)arg1;
- (void)_removeAllContentRuleLists;
- (void)compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)getAvailableContentRuleListIdentifiers:(id /* block */)arg1;
- (void)lookUpContentRuleListForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeContentExtensionForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeContentRuleListForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
