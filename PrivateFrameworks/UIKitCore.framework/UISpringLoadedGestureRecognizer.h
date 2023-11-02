
@interface UISpringLoadedGestureRecognizer : UIDragGestureRecognizer <_UIDragEventRespondable>

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
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (void)spring;

@end
