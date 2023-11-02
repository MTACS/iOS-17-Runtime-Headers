
@interface AKAvailabilityInvitation : NSObject {
    NSArray * _availableDuringActivityIdentifiers;
    NSArray * _unavailableDuringActivityIdentifiers;
}

@property (nonatomic, readonly) NSArray *availableDuringActivityIdentifiers;
@property (nonatomic, readonly) NSArray *unavailableDuringActivityIdentifiers;

- (void).cxx_destruct;
- (id)_payloadDictionary;
- (id)availableDuringActivityIdentifiers;
- (id)initWithAvailableDuringActivityIdentifiers:(id)arg1;
- (id)initWithAvailableDuringActivityIdentifiers:(id)arg1 unavailableDuringActivityIdentifiers:(id)arg2;
- (id)initWithStatusKitInvitationPayload:(id)arg1;
- (id)statusKitInvitationPayloadWithDateCreated:(id)arg1;
- (id)unavailableDuringActivityIdentifiers;

@end
