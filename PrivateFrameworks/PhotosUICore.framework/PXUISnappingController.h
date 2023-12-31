
@interface PXUISnappingController : PXSnappingController {
    UISelectionFeedbackGenerator * __selectionBehavior;
}

@property (setter=_setSelectionBehavior:, nonatomic, retain) UISelectionFeedbackGenerator *_selectionBehavior;

- (void).cxx_destruct;
- (id)_selectionBehavior;
- (void)_setSelectionBehavior:(id)arg1;
- (void)didSnapByAttraction;
- (id)initWithSnappingTarget:(double)arg1;
- (void)interactionBegan;

@end
