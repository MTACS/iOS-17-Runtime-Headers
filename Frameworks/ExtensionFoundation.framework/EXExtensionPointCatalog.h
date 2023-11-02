
@interface EXExtensionPointCatalog : NSObject {
    NSDictionary * _extensionPointByIdentifierPlatform;
}

@property (readonly) NSDictionary *extensionPointByIdentifierPlatform;

- (void).cxx_destruct;
- (id)extensionPointByIdentifierPlatform;
- (id)extensionPointForIdentifier:(id)arg1;
- (id)extensionPointForIdentifier:(id)arg1 platform:(unsigned int)arg2;
- (id)init;
- (id)initWithEnumerator:(id)arg1;

@end
