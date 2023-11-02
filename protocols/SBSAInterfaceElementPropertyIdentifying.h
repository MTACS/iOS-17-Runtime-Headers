
@protocol SBSAInterfaceElementPropertyIdentifying <NSObject, NSCopying>

@required

- (NSUUID *)associatedInterfaceElementIdentifier;
- (NSString *)interfaceElementProperty;

@end
