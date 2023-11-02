
@interface SACancelCrossDeviceRequest : SABaseClientBoundCommand

@property (nonatomic) bool cancelAssociatedRequests;
@property (nonatomic, copy) NSString *requestId;

- (bool)cancelAssociatedRequests;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestId;
- (bool)requiresResponse;
- (void)setCancelAssociatedRequests:(bool)arg1;
- (void)setRequestId:(id)arg1;

@end
