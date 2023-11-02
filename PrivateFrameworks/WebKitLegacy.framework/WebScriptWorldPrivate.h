
@interface WebScriptWorldPrivate : NSObject {
    struct RefPtr<WebCore::DOMWrapperWorld, WTF::RawPtrTraits<WebCore::DOMWrapperWorld>, WTF::DefaultRefDerefTraits<WebCore::DOMWrapperWorld>> { 
        struct DOMWrapperWorld {} *m_ptr; 
    }  world;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
