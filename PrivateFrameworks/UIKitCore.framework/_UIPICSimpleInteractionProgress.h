
@interface _UIPICSimpleInteractionProgress : UISimpleInteractionProgress {
    bool  _didEnd;
}

@property (nonatomic) bool didEnd;

- (bool)didEnd;
- (void)endInteraction:(bool)arg1;
- (void)setDidEnd:(bool)arg1;

@end
