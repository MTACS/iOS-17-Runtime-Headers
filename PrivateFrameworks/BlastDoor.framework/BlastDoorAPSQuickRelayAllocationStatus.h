
@interface BlastDoorAPSQuickRelayAllocationStatus : NSObject {
    void aPSQuickRelayAllocationStatus;
}

@property (nonatomic, readonly) long long allocationStatus;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *destinationId;
@property (nonatomic, readonly) bool has_allocationStatus;
@property (nonatomic, readonly) bool has_participantId;
@property (nonatomic, readonly) unsigned long long participantId;
@property (nonatomic, readonly) NSData *token;

- (void).cxx_destruct;
- (long long)allocationStatus;
- (id)description;
- (id)destinationId;
- (bool)has_allocationStatus;
- (bool)has_participantId;
- (id)init;
- (unsigned long long)participantId;
- (id)token;

@end
