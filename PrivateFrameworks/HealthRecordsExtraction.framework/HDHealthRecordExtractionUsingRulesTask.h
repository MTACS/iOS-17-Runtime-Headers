
@interface HDHealthRecordExtractionUsingRulesTask : NSObject <HDHealthRecordPipelineTask> {
    HDHealthRecordProcessingContext * _processingContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithProcessingContext:(id)arg1;
- (bool)processWithError:(id*)arg1;

@end
