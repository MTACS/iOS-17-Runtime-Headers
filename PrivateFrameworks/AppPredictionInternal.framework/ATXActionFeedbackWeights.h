
@interface ATXActionFeedbackWeights : NSObject {
    /* Warning: Unrecognized filer type: ' ' using 'void*' */ void* _confirmWeights;
    /* Warning: Unrecognized filer type: ' ' using 'void*' */ void* _rejectWeights;
}

+ (id)sharedInstance;

- (float)confirmWeightForFeedbackStage:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2;
- (id)init;
- (id)initWithAssetClass:(Class)arg1;
- (float)rejectWeightForFeedbackStage:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2;

@end
