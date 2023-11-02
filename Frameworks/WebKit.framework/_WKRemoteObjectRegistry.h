
@interface _WKRemoteObjectRegistry : NSObject {
    struct HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::DefaultHash<String>, WTF::HashTraits<String>, WTF::HashTraits<std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::HashTableTraits> { 
        struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>>, WTF::DefaultHash<String>, WTF::HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>::KeyValuePairTraits, WTF::HashTraits<String>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _exportedObjects;
    struct HashMap<unsigned long long, PendingReply, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply>, WTF::HashTableTraits> { 
        struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, PendingReply>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, PendingReply>>, WTF::DefaultHash<unsigned long long>, WTF::HashMap<unsigned long long, PendingReply>::KeyValuePairTraits, WTF::HashTraits<unsigned long long>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  _pendingReplies;
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    }  _remoteObjectProxies;
    struct unique_ptr<WebKit::RemoteObjectRegistry, std::default_delete<WebKit::RemoteObjectRegistry>> { 
        struct __compressed_pair<WebKit::RemoteObjectRegistry *, std::default_delete<WebKit::RemoteObjectRegistry>> { 
            struct RemoteObjectRegistry {} *__value_; 
        } __ptr_; 
    }  _remoteObjectRegistry;
}

@property (nonatomic, readonly) void*remoteObjectRegistry;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_callReplyWithID:(unsigned long long)arg1 blockInvocation:(const void*)arg2;
- (id)_initWithWebPage:(struct NakedRef<WebKit::WebPage> { struct WebPage {} *x1; })arg1;
- (id)_initWithWebPageProxy:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy {} *x1; })arg1;
- (void)_invalidate;
- (void)_invokeMethod:(const void*)arg1;
- (void)_releaseReplyWithID:(unsigned long long)arg1;
- (void)_sendInvocation:(id)arg1 interface:(id)arg2;
- (void)registerExportedObject:(id)arg1 interface:(id)arg2;
- (id)remoteObjectProxyWithInterface:(id)arg1;
- (void*)remoteObjectRegistry;
- (void)unregisterExportedObject:(id)arg1 interface:(id)arg2;

@end
