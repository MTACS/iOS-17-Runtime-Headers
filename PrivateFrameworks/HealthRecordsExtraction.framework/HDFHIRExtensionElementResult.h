
@interface HDFHIRExtensionElementResult : NSObject <NSCopying> {
    HDFHIRExtensionElement * _extensionElement;
    bool  _isModifierExtension;
    NSString * _keyPath;
}

@property (nonatomic, readonly, copy) HDFHIRExtensionElement *extensionElement;
@property (nonatomic, readonly) bool isModifierExtension;
@property (nonatomic, readonly, copy) NSString *keyPath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extensionElement;
- (id)init;
- (id)initWithExtensionElement:(id)arg1 keyPath:(id)arg2 isModifierExtension:(bool)arg3;
- (bool)isModifierExtension;
- (id)keyPath;

@end
