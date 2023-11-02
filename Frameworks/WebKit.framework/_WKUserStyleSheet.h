
@interface _WKUserStyleSheet : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::UserStyleSheet> { 
        struct type { 
            unsigned char __lx[136]; 
        } data; 
    }  _userStyleSheet;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForMainFrameOnly, nonatomic, readonly) bool forMainFrameOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *source;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)baseURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 forMainFrameOnly:(bool)arg2;
- (id)initWithSource:(id)arg1 forWKWebView:(id)arg2 forMainFrameOnly:(bool)arg3 includeMatchPatternStrings:(id)arg4 excludeMatchPatternStrings:(id)arg5 baseURL:(id)arg6 level:(long long)arg7 contentWorld:(id)arg8;
- (bool)isForMainFrameOnly;
- (id)source;

@end
