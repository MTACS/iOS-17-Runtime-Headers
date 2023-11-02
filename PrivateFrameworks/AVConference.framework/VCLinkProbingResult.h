
@interface VCLinkProbingResult : NSObject {
    NSNumber * _expMovMeanRTT;
    struct { 
        unsigned char linkProbingCapabilityVersion; 
        unsigned int linkProbingQueryResultsInterval; 
        double expMovMeanFactor; 
        double envelopeAttackFactor; 
        double envelopeDecayFactor; 
        NSArray *plrBuckets; 
    }  _linkProbingResultConfig;
    NSNumber * _plrEnvelopeValue;
    NSNumber * _plrTier;
    unsigned int  _receivedResponseCount;
    unsigned int  _reorderedPacketsCount;
    NSMutableArray * _requestTimestampAndRTTList;
    unsigned int  _sentRequestCount;
}

@property (readonly) NSNumber *expMovMeanRTT;
@property (readonly) NSNumber *plrEnvelopeValue;
@property (readonly) NSNumber *plrTier;
@property (readonly) unsigned int receivedResponseCount;
@property (readonly) unsigned int reorderedPacketsCount;
@property (readonly) NSMutableArray *requestTimestampAndRTTList;
@property (readonly) unsigned int sentRequestCount;

- (void)dealloc;
- (id)description;
- (id)expMovMeanRTT;
- (unsigned char)getPLRTierFromPLREnvelope:(double)arg1;
- (id)initWithProbingResults:(id)arg1 linkProbingResultConfig:(struct { unsigned char x1; unsigned int x2; double x3; double x4; double x5; id x6; })arg2;
- (void)mergeProbingResults:(id)arg1;
- (id)plrEnvelopeValue;
- (id)plrTier;
- (unsigned int)receivedResponseCount;
- (unsigned int)reorderedPacketsCount;
- (id)requestTimestampAndRTTList;
- (unsigned int)sentRequestCount;
- (void)updateLinkStatsWithArrivingNewValueMeanRTT:(double)arg1 arrivingNewValuePLR:(double)arg2;
- (void)updateProbingResult:(id)arg1 initialResult:(bool)arg2;

@end
