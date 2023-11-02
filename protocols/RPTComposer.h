
@protocol RPTComposer <NSObject, RCPEventStreamComposer, RPTPointerAndFingerInteroppingComposer>

@required

+ (id)composerWrapping:(id <RCPEventStreamComposer>)arg1 withInteractionOptions:(RPTInteractionOptions *)arg2;

- (RPTInteractionOptions *)interactionOptions;
- (void)overrideInteractionOptions:(void *)arg1 withEventActionsBlock:(void *)arg2; // needs 2 arg types, found 7: RPTInteractionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <RPTComposer> *, void*
- (void)pointerMoveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerSetAbsolutePosition:(struct CGPoint { double x1; double x2; })arg1;

@end
