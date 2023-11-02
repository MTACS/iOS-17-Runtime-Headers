
@interface _MXExtensionContainingAppProxy : NSObject {
    NSString * _containingAppIdentifer;
    NSMutableSet * _extensionNonUIIdentifiers;
    NSMutableSet * _extensionUIIdentifiers;
}

@property (nonatomic, readonly, copy) NSString *containingAppIdentifer;
@property (nonatomic, retain) NSMutableSet *extensionNonUIIdentifiers;
@property (nonatomic, retain) NSMutableSet *extensionUIIdentifiers;

- (void).cxx_destruct;
- (id)containingAppIdentifer;
- (id)extensionNonUIIdentifiers;
- (id)extensionUIIdentifiers;
- (id)initWithContainingAppIdentifer:(id)arg1;
- (void)setExtensionNonUIIdentifiers:(id)arg1;
- (void)setExtensionUIIdentifiers:(id)arg1;

@end
