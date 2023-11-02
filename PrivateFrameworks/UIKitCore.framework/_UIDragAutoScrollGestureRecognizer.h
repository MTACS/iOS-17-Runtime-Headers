
@interface _UIDragAutoScrollGestureRecognizer : UIDragGestureRecognizer <_UIDragEventRespondable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_draggingEndedWithEvent:(id)arg1;
- (void)_draggingEnteredWithEvent:(id)arg1;
- (void)_draggingExitedWithEvent:(id)arg1;
- (void)_draggingUpdatedWithEvent:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;

@end
