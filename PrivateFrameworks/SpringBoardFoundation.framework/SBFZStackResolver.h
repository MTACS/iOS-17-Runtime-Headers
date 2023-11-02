
@interface SBFZStackResolver : NSObject <BSDescriptionProviding> {
    SBFZStackParticipant * _highestZStackParticipant;
    NSMapTable * _participantObservers;
    NSMutableArray * _participants;
    NSString * _resolvedStackDescription;
    <BSInvalidatable> * _stateCaptureHandle;
}

@property (nonatomic, readonly, copy) NSArray *_registeredParticipants;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_registeredParticipants;
- (id)acquireParticipantWithIdentifier:(long long)arg1 delegate:(id)arg2;
- (id)addObserver:(id)arg1 ofParticipantWithIdentifier:(long long)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1 ofParticipantWithIdentifier:(long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
