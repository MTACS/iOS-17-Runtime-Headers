
@interface SBSAGestureDescription : NSObject <NSCopying, SBSABlockMutating, SBSAGestureDescribing> {
    NSUUID * _associatedInterfaceElementIdentifier;
    NSUUID * _gestureIdentifier;
    long long  _gestureRecognizerState;
}

@property (setter=_setAssociatedInterfaceElementIdentifier:, nonatomic, copy) NSUUID *associatedInterfaceElementIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setGestureIdentifier:, nonatomic, copy) NSUUID *gestureIdentifier;
@property (setter=_setGestureRecognizerState:, nonatomic) long long gestureRecognizerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setAssociatedInterfaceElementIdentifier:(id)arg1;
- (void)_setGestureIdentifier:(id)arg1;
- (void)_setGestureRecognizerState:(long long)arg1;
- (id)associatedInterfaceElementIdentifier;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)gestureIdentifier;
- (long long)gestureRecognizerState;
- (unsigned long long)hash;
- (id)initWithGestureDescription:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
