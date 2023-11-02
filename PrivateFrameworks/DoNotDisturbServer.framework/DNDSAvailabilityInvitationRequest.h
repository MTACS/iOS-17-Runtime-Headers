
@interface DNDSAvailabilityInvitationRequest : NSObject {
    NSArray * _handles;
    AKAvailabilityInvitation * _invitation;
}

@property (readonly, copy) NSArray *handles;
@property (readonly, copy) AKAvailabilityInvitation *invitation;

- (void).cxx_destruct;
- (id)handles;
- (unsigned long long)hash;
- (id)initWithHandles:(id)arg1 invitation:(id)arg2;
- (id)invitation;
- (bool)isEqual:(id)arg1;

@end
