
@interface _WKWebExtensionControllerConfiguration : NSObject <NSCopying, NSSecureCoding, WKObject> {
    struct ObjectStorage<WebKit::WebExtensionControllerConfiguration> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _webExtensionControllerConfiguration;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) void*_webExtensionControllerConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (readonly) Class superclass;

+ (id)configurationWithIdentifier:(id)arg1;
+ (id)defaultConfiguration;
+ (id)nonPersistentConfiguration;
+ (bool)supportsSecureCoding;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void*)_webExtensionControllerConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPersistent;

@end
