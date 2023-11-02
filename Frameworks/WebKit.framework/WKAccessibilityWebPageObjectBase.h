
@interface WKAccessibilityWebPageObjectBase : NSObject {
    bool  m_hasMainFramePlugin;
    struct NakedPtr<WebKit::WebPage> { 
        struct WebPage {} *m_ptr; 
    }  m_page;
    struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
        unsigned long long m_identifier; 
    }  m_pageID;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  m_parent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityPluginObject;
- (id)accessibilityRootObjectWrapper;
- (struct NakedPtr<WebCore::AXObjectCache> { struct AXObjectCache {} *x1; })axObjectCache;
- (void)setHasMainFramePlugin:(bool)arg1;
- (void)setRemoteParent:(id)arg1;
- (void)setWebPage:(struct NakedPtr<WebKit::WebPage> { struct WebPage {} *x1; })arg1;

@end
