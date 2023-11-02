
@interface WKDOMRange : NSObject {
    struct RefPtr<WebCore::Range, WTF::RawPtrTraits<WebCore::Range>, WTF::DefaultRefDerefTraits<WebCore::Range>> { 
        struct Range {} *m_ptr; 
    }  _impl;
}

@property (readonly, retain) WKDOMNode *endContainer;
@property (readonly) long long endOffset;
@property (readonly) bool isCollapsed;
@property (readonly, retain) WKDOMNode *startContainer;
@property (readonly) long long startOffset;
@property (readonly, copy) NSString *text;
@property (readonly) NSArray *textRects;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKBundleRangeHandle { }*)_copyBundleRangeHandleRef;
- (id)_initWithImpl:(void*)arg1;
- (void)collapse:(bool)arg1;
- (void)dealloc;
- (id)endContainer;
- (long long)endOffset;
- (id)initWithDocument:(id)arg1;
- (bool)isCollapsed;
- (id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)arg1 inDirection:(long long)arg2;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (id)startContainer;
- (long long)startOffset;
- (id)text;
- (id)textRects;

@end
