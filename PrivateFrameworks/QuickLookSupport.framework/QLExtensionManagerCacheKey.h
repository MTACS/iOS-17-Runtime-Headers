
@interface QLExtensionManagerCacheKey : NSObject <NSCopying> {
    bool  _allowParentTypes;
    NSDictionary * _attributes;
    NSString * _extensionPath;
    bool  _wantsFirstPartyExtension;
}

@property (readonly) bool allowParentTypes;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *extensionPath;
@property (readonly) bool wantsFirstPartyExtension;

- (void).cxx_destruct;
- (bool)allowParentTypes;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extensionPath;
- (unsigned long long)hash;
- (id)initWithAttributes:(id)arg1 allowParentTypes:(bool)arg2 wantsFirstPartyExtension:(bool)arg3 extensionPath:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)wantsFirstPartyExtension;

@end
