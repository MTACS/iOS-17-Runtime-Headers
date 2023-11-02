
@protocol SBSAGestureDescribing <SBSAGestureIdentifying>

@required

- (NSUUID *)associatedInterfaceElementIdentifier;
- (long long)gestureRecognizerState;

@end
