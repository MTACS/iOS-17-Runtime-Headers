
@interface UPContextualizer : NSObject {
    UPContextualizerStrategyCancel * _cancelContextualizerStrategy;
    UPContextualizerStrategyOffer * _offerContextualizerStrategy;
    UPContextualizerStrategyOptions * _optionsContextualizerStrategy;
    double  _prebuiltIntentThreshold;
    UPContextualizerStrategyPrompt * _promptContextualizerStrategy;
}

@property (nonatomic, readonly) UPContextualizerStrategyCancel *cancelContextualizerStrategy;
@property (nonatomic, readonly) UPContextualizerStrategyOffer *offerContextualizerStrategy;
@property (nonatomic, readonly) UPContextualizerStrategyOptions *optionsContextualizerStrategy;
@property (nonatomic, readonly) double prebuiltIntentThreshold;
@property (nonatomic, readonly) UPContextualizerStrategyPrompt *promptContextualizerStrategy;

- (void).cxx_destruct;
- (id)_contextualizeByDialogActTypeUsingContextualizerInput:(id)arg1;
- (id)cancelContextualizerStrategy;
- (id)init;
- (id)initWithPrebuiltIntentThreshold:(double)arg1;
- (id)offerContextualizerStrategy;
- (id)optionsContextualizerStrategy;
- (double)prebuiltIntentThreshold;
- (id)promptContextualizerStrategy;
- (id)resultWithContextualizerInput:(id)arg1;

@end
