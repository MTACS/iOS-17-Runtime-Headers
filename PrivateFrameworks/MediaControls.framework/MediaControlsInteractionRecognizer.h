
@interface MediaControlsInteractionRecognizer : UIGestureRecognizer {
    MSVTimer * _interactionTimer;
}

@property (nonatomic, retain) MSVTimer *interactionTimer;

- (void).cxx_destruct;
- (id)interactionTimer;
- (void)setInteractionTimer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
