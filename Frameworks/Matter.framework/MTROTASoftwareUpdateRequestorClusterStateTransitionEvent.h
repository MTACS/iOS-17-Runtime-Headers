
@interface MTROtaSoftwareUpdateRequestorClusterStateTransitionEvent : MTROTASoftwareUpdateRequestorClusterStateTransitionEvent

@property (getter=getNewState, nonatomic, copy) NSNumber *newState;
@property (nonatomic, copy) NSNumber *previousState;
@property (nonatomic, copy) NSNumber *reason;
@property (nonatomic, copy) NSNumber *targetSoftwareVersion;

@end
