
@interface SBSAInterfaceElementPropertyIdentity : NSObject <SBSAInterfaceElementPropertyIdentifying> {
    NSUUID * _associatedInterfaceElementIdentifier;
    NSString * _interfaceElementProperty;
}

@property (nonatomic, readonly, copy) NSUUID *associatedInterfaceElementIdentifier;
@property (getter=isBoundsProperty, nonatomic, readonly) bool boundsProperty;
@property (getter=isContentBoundsProperty, nonatomic, readonly) bool contentBoundsProperty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *interfaceElementProperty;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedInterfaceElementIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAssociatedInterfaceElementIdentifier:(id)arg1 andProperty:(id)arg2;
- (id)interfaceElementProperty;
- (bool)isBoundsProperty;
- (bool)isContentBoundsProperty;
- (bool)isEqual:(id)arg1;

@end
