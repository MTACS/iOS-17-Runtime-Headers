
@protocol _UIContextMenuScrollObservationInteractionDelegate

@required

- (void)scrollObservationInteraction:(_UIContextMenuScrollObservationInteraction *)arg1 didUpdateWithTranslation:(struct CGPoint { double x1; double x2; })arg2 location:(struct CGPoint { double x1; double x2; })arg3 ended:(bool)arg4;
- (void)scrollObservationInteraction:(_UIContextMenuScrollObservationInteraction *)arg1 willBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
