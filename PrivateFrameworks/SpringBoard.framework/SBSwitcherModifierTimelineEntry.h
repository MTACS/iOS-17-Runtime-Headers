
@interface SBSwitcherModifierTimelineEntry : NSObject {
    SBSwitcherModifierEventSnapshot * _eventSnapshot;
    SBSwitcherModifierEventResponseSnapshot * _responseSnapshot;
    SBSwitcherModifierStackSnapshot * _stackSnapshotAfterEvent;
}

@property (nonatomic, readonly) SBSwitcherModifierEventSnapshot *eventSnapshot;
@property (nonatomic, readonly) SBSwitcherModifierEventResponseSnapshot *responseSnapshot;
@property (nonatomic, readonly) SBSwitcherModifierStackSnapshot *stackSnapshotAfterEvent;

- (void).cxx_destruct;
- (id)eventSnapshot;
- (id)initWithEventSnapshot:(id)arg1 responseSnapshot:(id)arg2 stackSnapshotAfterEvent:(id)arg3;
- (id)responseSnapshot;
- (id)stackSnapshotAfterEvent;

@end
