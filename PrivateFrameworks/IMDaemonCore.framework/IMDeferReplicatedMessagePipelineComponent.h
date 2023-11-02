
@interface IMDeferReplicatedMessagePipelineComponent : IMPipelineComponent {
    bool  _skipDeferral;
}

@property (nonatomic) bool skipDeferral;

- (bool)_shouldDeferDeliveryWithInput:(id)arg1;
- (id)runIndividuallyWithInput:(id)arg1;
- (void)setSkipDeferral:(bool)arg1;
- (bool)skipDeferral;

@end
