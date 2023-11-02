
@interface _PSCNAutocompleteFeedbackTracker : NSObject {
    _PSCNAutocompleteFeedbackSessionAccumulator * _accumulator;
    id /* block */  _actionLogger;
    NSDateFormatter * _dateFormatter;
    bool  _defaultForIsImplicit;
    _CDInteraction * _followingInteraction;
    _CDInteraction * _followingInteractionPrevious;
    id /* block */  _impressionLogger;
    bool  _inActionWindow;
    _PSCNAutocompleteFeedbackInteractionIterator * _interactionIterator;
    long long  _maxSecondsBetweenImpressionAndAction;
    bool  _shouldInferEnterAndExit;
    NSDate * _stopTime;
    id /* block */  _submodelImpressionLogger;
}

@property (nonatomic, readonly) NSDate *stopTime;

+ (id)defaultActionWithInteraction:(id)arg1 trialID:(id)arg2 isImplicit:(bool)arg3;
+ (id)defaultImpressionWithFeedback:(id)arg1 bundleID:(id)arg2 trialID:(id)arg3 isImplicit:(bool)arg4;
+ (id)defaultSubmodelImpressionWithFeedback:(id)arg1 submodel:(id)arg2 bundleID:(id)arg3 trialID:(id)arg4 isImplicit:(bool)arg5;

- (void).cxx_destruct;
- (void)annotateAction:(id)arg1 withStatistics:(id)arg2;
- (void)annotateImpression:(id)arg1 withStatistics:(id)arg2;
- (void)finish;
- (void)finishWithInferredEnterAndExit;
- (void)finishWithoutInferredEnterAndExit;
- (id)init;
- (id)initWithInteractionIterator:(id)arg1 maxSecondsBetweenImpressionAndAction:(long long)arg2 shouldInferEnterAndExit:(bool)arg3 impressionLogger:(id /* block */)arg4 submodelImpressionLogger:(id /* block */)arg5 actionLogger:(id /* block */)arg6 defaultForIsImplicit:(bool)arg7;
- (void)logActionFromAccumulator:(id)arg1;
- (void)logImpressionsFromAccumulator:(id)arg1;
- (void)processFeedback:(id)arg1;
- (void)processFeedbackWithInferredEnterAndExit:(id)arg1;
- (void)processFeedbackWithoutInferredEnterAndExit:(id)arg1;
- (id)stopTime;

@end
