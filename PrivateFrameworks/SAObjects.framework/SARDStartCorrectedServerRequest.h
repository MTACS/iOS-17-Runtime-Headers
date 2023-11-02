
@interface SARDStartCorrectedServerRequest : SARDStartServerRequest

@property (nonatomic, copy) NSString *interactionIdToBeCorrected;
@property (nonatomic, copy) NSString *utteranceToBeCorrected;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionIdToBeCorrected;
- (bool)requiresResponse;
- (void)setInteractionIdToBeCorrected:(id)arg1;
- (void)setUtteranceToBeCorrected:(id)arg1;
- (id)utteranceToBeCorrected;

@end
