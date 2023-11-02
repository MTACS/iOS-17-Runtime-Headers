
@interface SBSAContainerStaticTouchAction : NSObject <SBSAActionRepresenting> {
    NSUUID * _associatedInterfaceElementIdentifier;
    NSArray * _reasons;
}

@property (nonatomic, readonly, copy) NSUUID *associatedInterfaceElementIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *reasons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedInterfaceElementIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAssociatedInterfaceElementIdentifier:(id)arg1 reasons:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)reasons;

@end
