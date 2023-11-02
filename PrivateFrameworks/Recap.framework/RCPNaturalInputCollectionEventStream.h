
@interface RCPNaturalInputCollectionEventStream : NSObject <RCPNaturalInputCollectionEventStreamChildComposer> {
    NSMutableDictionary * _currentManipulatorsBySourceGroup;
    long long  _currentPhase;
    RCPNaturalInputCollectionSelection * _currentSelection;
    double  _currentTimeOffset;
    NSMutableArray * _eventBuffer;
    RCPEventSenderProperties * _senderProperties;
    <RCPMachTimestampProvider> * _timestampProvider;
}

@property (retain) NSMutableDictionary *currentManipulatorsBySourceGroup;
@property long long currentPhase;
@property (retain) RCPNaturalInputCollectionSelection *currentSelection;
@property double currentTimeOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *eventBuffer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RCPEventSenderProperties *senderProperties;
@property (readonly) Class superclass;
@property (retain) <RCPMachTimestampProvider> *timestampProvider;

- (void).cxx_destruct;
- (void)advanceTime:(double)arg1;
- (void)closeManipulatorAtLocation:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4;
- (void)commitEvent;
- (id)currentManipulatorsBySourceGroup;
- (long long)currentPhase;
- (id)currentSelection;
- (double)currentTimeOffset;
- (id)eventBuffer;
- (id)finalizedEvents;
- (void)finish;
- (id)initWithCurrentTimeOffset:(double)arg1 timestampProvider:(id)arg2 senderProperties:(id)arg3;
- (void)moveManipulatorByDelta:(struct CGVector { double x1; double x2; })arg1 withZDelta:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4;
- (void)moveManipulatorToLocation:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4;
- (void)moveSelectionByDelta:(struct CGVector { double x1; double x2; })arg1 withZDelta:(double)arg2;
- (void)moveSelectionByDelta:(struct CGVector { double x1; double x2; })arg1 zDelta:(double)arg2 directionDelta:(struct CGVector { double x1; double x2; })arg3 zDirectionDelta:(double)arg4;
- (void)moveSelectionToLocation:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2;
- (void)moveSelectionToLocation:(struct CGPoint { double x1; double x2; })arg1 zPosition:(double)arg2 direction:(struct CGPoint { double x1; double x2; })arg3 zDirection:(double)arg4;
- (void)openManipulatorAtLocation:(struct CGPoint { double x1; double x2; })arg1 withZPosition:(double)arg2 sourceGroup:(long long)arg3 interactionMethod:(long long)arg4;
- (id)senderProperties;
- (void)setCurrentManipulatorsBySourceGroup:(id)arg1;
- (void)setCurrentPhase:(long long)arg1;
- (void)setCurrentSelection:(id)arg1;
- (void)setCurrentTimeOffset:(double)arg1;
- (void)setEventBuffer:(id)arg1;
- (void)setSenderProperties:(id)arg1;
- (void)setTimestampProvider:(id)arg1;
- (id)timestampProvider;
- (void)updatePhase;

@end
