
@protocol CKVersionedMergeable <CKMergeable>

@required

- (CKDistributedTimestampStateVector *)stateVector;

@optional

- (unsigned long long)deltaDeliveryRequirements;

@end
