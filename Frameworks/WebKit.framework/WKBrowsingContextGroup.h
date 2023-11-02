
@interface WKBrowsingContextGroup : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPageGroup> { 
        struct type { 
            unsigned char __lx[64]; 
        } data; 
    }  _pageGroup;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly) struct OpaqueWKPageGroup { }*_pageGroupRef;
@property bool allowsJavaScript;
@property bool allowsPlugIns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool privateBrowsingEnabled;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (struct OpaqueWKPageGroup { }*)_pageGroupRef;
- (void)addUserScript:(id)arg1 baseURL:(id)arg2 includeMatchPatternStrings:(id)arg3 excludeMatchPatternStrings:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(bool)arg6;
- (void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 includeMatchPatternStrings:(id)arg3 excludeMatchPatternStrings:(id)arg4 mainFrameOnly:(bool)arg5;
- (bool)allowsJavaScript;
- (bool)allowsJavaScriptMarkup;
- (bool)allowsPlugIns;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (bool)privateBrowsingEnabled;
- (void)removeAllUserScripts;
- (void)removeAllUserStyleSheets;
- (void)setAllowsJavaScript:(bool)arg1;
- (void)setAllowsJavaScriptMarkup:(bool)arg1;
- (void)setAllowsPlugIns:(bool)arg1;
- (void)setPrivateBrowsingEnabled:(bool)arg1;

@end
