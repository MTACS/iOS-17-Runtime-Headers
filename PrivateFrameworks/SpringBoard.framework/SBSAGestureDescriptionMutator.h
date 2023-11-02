
@interface SBSAGestureDescriptionMutator : NSObject {
    SBSAGestureDescription * _gestureDescription;
}

@property (nonatomic, copy) NSUUID *associatedInterfaceElementIdentifier;
@property (nonatomic, readonly) SBSAGestureDescription *gestureDescription;
@property (nonatomic, copy) NSUUID *gestureIdentifier;
@property (nonatomic) long long gestureRecognizerState;

- (void).cxx_destruct;
- (id)associatedInterfaceElementIdentifier;
- (id)description;
- (id)gestureDescription;
- (id)gestureIdentifier;
- (long long)gestureRecognizerState;
- (id)initWithGestureDescription:(id)arg1;
- (void)setAssociatedInterfaceElementIdentifier:(id)arg1;
- (void)setGestureIdentifier:(id)arg1;
- (void)setGestureRecognizerState:(long long)arg1;

@end
