
@protocol HDHealthRecordPipelineTask <NSObject>

@required

- (id)initWithProcessingContext:(HDHealthRecordProcessingContext *)arg1;
- (bool)processWithError:(id*)arg1;

@end
