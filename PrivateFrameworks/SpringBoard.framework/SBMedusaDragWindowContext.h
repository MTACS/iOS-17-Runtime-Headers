
@interface SBMedusaDragWindowContext : NSObject {
    UIWindow<SBIconDragPreviewContaining> * _dragWindow;
    TRAParticipant * _traitsParticipant;
    SBTraitsWindowParticipantDelegate * _traitsParticipantDelegate;
}

@property (nonatomic, readonly) UIWindow<SBIconDragPreviewContaining> *dragWindow;
@property (nonatomic, readonly) TRAParticipant *traitsParticipant;
@property (nonatomic, readonly) SBTraitsWindowParticipantDelegate *traitsParticipantDelegate;

- (void).cxx_destruct;
- (id)dragWindow;
- (id)initWithDragWindow:(id)arg1 traitsParticipant:(id)arg2 traitsParticipantDelegate:(id)arg3;
- (id)traitsParticipant;
- (id)traitsParticipantDelegate;

@end
