
@interface _WBShareParticipantData : NSObject {
    NSSet * _activeParticipantIDs;
    NSArray * _participants;
}

@property (nonatomic, copy) NSSet *activeParticipantIDs;
@property (nonatomic, copy) NSArray *participants;

- (void).cxx_destruct;
- (id)activeParticipantIDs;
- (id)participants;
- (void)setActiveParticipantIDs:(id)arg1;
- (void)setParticipants:(id)arg1;

@end
