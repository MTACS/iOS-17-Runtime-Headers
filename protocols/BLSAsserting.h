
@protocol BLSAsserting <NSObject>

@required

- (unsigned long long)acquisitionState;
- (BLSAssertionDescriptor *)descriptor;
- (BLSAssertionIdentifier *)identifier;
- (bool)isAcquired;
- (void)setIdentifier:(BLSAssertionIdentifier *)arg1;

@end
