
@interface HMMTRProtocolMappingState : HMFObject {
    bool  _shouldIgnoreSingleMultiPressComplete;
}

@property (nonatomic) bool shouldIgnoreSingleMultiPressComplete;

- (void)setShouldIgnoreSingleMultiPressComplete:(bool)arg1;
- (bool)shouldIgnoreSingleMultiPressComplete;

@end
