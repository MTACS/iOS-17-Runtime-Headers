
@interface WKDOMNode : NSObject {
    struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { 
        struct Node {} *m_ptr; 
    }  _impl;
}

@property (readonly) WKDOMDocument *document;
@property (readonly) WKDOMNode *firstChild;
@property (readonly) WKDOMNode *lastChild;
@property (readonly) WKDOMNode *nextSibling;
@property (readonly) WKDOMNode *parentNode;
@property (readonly) WKDOMNode *previousSibling;
@property (readonly) NSArray *textRects;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKBundleNodeHandle { }*)_copyBundleNodeHandleRef;
- (id)_initWithImpl:(void*)arg1;
- (void)appendChild:(id)arg1;
- (void)dealloc;
- (id)document;
- (id)firstChild;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (id)lastChild;
- (id)nextSibling;
- (id)parentNode;
- (id)previousSibling;
- (void)removeChild:(id)arg1;
- (id)textRects;

@end
