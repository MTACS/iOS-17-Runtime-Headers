
@protocol SBLayoutElementDescriptor <NSObject>

@required

- (id /* block */)entityGenerator:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)hasLayoutAttributes:(unsigned long long)arg1;
- (unsigned long long)layoutAttributes;
- (long long)layoutRole;
- (bool)representsSameLayoutElementAsDescriptor:(id <SBLayoutElementDescriptor>)arg1;
- (unsigned long long)supportedLayoutRoles;
- (bool)supportsLayoutRole:(long long)arg1;
- (NSString *)uniqueIdentifier;
- (Class)viewControllerClass;

@end
