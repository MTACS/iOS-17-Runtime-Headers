
@interface SBSAContainerResizeAction : NSObject <SBSAActionRepresenting> {
    NSUUID * _associatedInterfaceElementIdentifier;
    NSArray * _reasons;
    long long  _resizeActionResult;
}

@property (nonatomic, readonly, copy) NSUUID *associatedInterfaceElementIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *reasons;
@property (nonatomic, readonly) long long resizeActionResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedInterfaceElementIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithResult:(long long)arg1 associatedInterfaceElementIdentifier:(id)arg2 reasons:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)reasons;
- (long long)resizeActionResult;

@end
