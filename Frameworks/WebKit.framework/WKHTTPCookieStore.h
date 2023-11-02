
@interface WKHTTPCookieStore : NSObject <WKObject> {
    struct ObjectStorage<API::HTTPCookieStore> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _cookieStore;
    struct HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::HashTableTraits> { 
        struct HashTable<const void *, WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>>, WTF::DefaultHash<const void *>, WTF::HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>>::KeyValuePairTraits, WTF::HashTraits<const void *>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _observers;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)_flushCookiesToDiskWithCompletionHandler:(id /* block */)arg1;
- (void)_getCookiesForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setCookieAcceptPolicy:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)deleteCookie:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllCookies:(id /* block */)arg1;
- (void)getCookiePolicy:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCookie:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCookiePolicy:(long long)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)sf_applySafariCookieStoragePolicy;

@end
