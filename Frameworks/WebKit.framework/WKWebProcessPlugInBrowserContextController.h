
@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject> {
    struct WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate>> { 
        id m_weakReference; 
    }  _editingDelegate;
    struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate>> { 
        id m_weakReference; 
    }  _formDelegate;
    struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate>> { 
        id m_weakReference; 
    }  _loadDelegate;
    struct ObjectStorage<WebKit::WebPage> { 
        struct type { 
            unsigned char __lx[2240]; 
        } data; 
    }  _page;
    struct RetainPtr<_WKRemoteObjectRegistry> { 
        void *m_ptr; 
    }  _remoteObjectRegistry;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) struct OpaqueWKBundlePage { }*_bundlePageRef;
@property (setter=_setDefersLoading:, nonatomic) bool _defersLoading;
@property (setter=_setEditingDelegate:) <WKWebProcessPlugInEditingDelegate> *_editingDelegate;
@property (setter=_setFormDelegate:) <WKWebProcessPlugInFormDelegatePrivate> *_formDelegate;
@property (nonatomic, readonly) NSString *_groupIdentifier;
@property (nonatomic, readonly) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property (nonatomic, readonly) bool _usesNonPersistentWebsiteDataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WKBrowsingContextHandle *handle;
@property (readonly) unsigned long long hash;
@property <WKWebProcessPlugInLoadDelegate> *loadDelegate;
@property (readonly) WKWebProcessPlugInFrame *mainFrame;
@property (readonly) WKDOMDocument *mainFrameDocument;
@property (readonly) WKDOMRange *selectedRange;
@property (readonly) Class superclass;

+ (id)lookUpBrowsingContextFromHandle:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (struct OpaqueWKBundlePage { }*)_bundlePageRef;
- (bool)_defersLoading;
- (id)_editingDelegate;
- (id)_formDelegate;
- (id)_groupIdentifier;
- (id)_remoteObjectRegistry;
- (void)_setDefersLoading:(bool)arg1;
- (void)_setEditingDelegate:(id)arg1;
- (void)_setFormDelegate:(id)arg1;
- (bool)_usesNonPersistentWebsiteDataStore;
- (void)dealloc;
- (id)handle;
- (id)loadDelegate;
- (id)mainFrame;
- (id)mainFrameDocument;
- (id)selectedRange;
- (void)setLoadDelegate:(id)arg1;

@end
