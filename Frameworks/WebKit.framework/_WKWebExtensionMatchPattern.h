
@interface _WKWebExtensionMatchPattern : NSObject <NSCopying, NSSecureCoding, WKObject> {
    struct ObjectStorage<WebKit::WebExtensionMatchPattern> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    }  _webExtensionMatchPattern;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) void*_webExtensionMatchPattern;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly) bool matchesAllHosts;
@property (nonatomic, readonly) bool matchesAllURLs;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly, copy) NSString *scheme;
@property (nonatomic, readonly, copy) NSString *string;
@property (readonly) Class superclass;

+ (id)allHostsAndSchemesMatchPattern;
+ (id)allURLsMatchPattern;
+ (id)matchPatternWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
+ (id)matchPatternWithString:(id)arg1;
+ (void)registerCustomURLScheme:(id)arg1;
+ (bool)supportsSecureCoding;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void*)_webExtensionMatchPattern;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)host;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 error:(id*)arg4;
- (id)initWithString:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)matchesAllHosts;
- (bool)matchesAllURLs;
- (bool)matchesPattern:(id)arg1;
- (bool)matchesPattern:(id)arg1 options:(unsigned long long)arg2;
- (bool)matchesURL:(id)arg1;
- (bool)matchesURL:(id)arg1 options:(unsigned long long)arg2;
- (id)path;
- (id)scheme;
- (id)string;

@end
