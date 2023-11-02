
@interface PPCollaborativeFilteringSampler : NSObject {
    _PASCFBurstTrie * _samplingWeightTrie;
}

- (void).cxx_destruct;
- (unsigned int)_probabilityForItemString:(id)arg1 clientIdentifier:(id)arg2;
- (id)_weightedSampleFeedbackItems:(id)arg1;
- (bool)constructAndSendMessageForSamplingRate:(double)arg1 shouldContinueBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithSamplingWeightTrie:(id)arg1;

@end
