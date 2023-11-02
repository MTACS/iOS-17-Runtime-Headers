
@interface WKWebViewContentProviderRegistry : NSObject {
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits> { 
        struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>>, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash>::KeyValuePairTraits, WTF::HashTraits<String>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> { 
        struct HashMap<WebKit::WebPageProxy *, unsigned int, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int>, WTF::HashTableTraits> { 
            struct HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>>, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int>::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *>> { 
                union { 
                    void *m_table; 
                    unsigned int *m_tableForLLDB; 
                } ; 
            } m_impl; 
        } m_impl; 
    }  _pages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String {} *x1; unsigned int x2; unsigned int x3; })_mimeTypesWithCustomContentProviders;
- (void)addPage:(void*)arg1;
- (id)initWithConfiguration:(id)arg1;
- (Class)providerForMIMEType:(const void*)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const void*)arg2;
- (void)removePage:(void*)arg1;

@end
