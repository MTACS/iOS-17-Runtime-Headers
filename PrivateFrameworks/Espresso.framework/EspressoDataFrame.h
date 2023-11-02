
@interface EspressoDataFrame : NSObject {
    NSString * _function_name;
    NSMutableDictionary * _groundTruthAttachments;
    NSMutableDictionary * _inputAttachments;
    NSMutableDictionary * _outputAttachments;
}

@property (retain) NSString *function_name;
@property (readonly) NSArray *groundTruthAttachmentNames;
@property (retain) NSMutableDictionary *groundTruthAttachments;
@property (readonly) NSArray *inputAttachmentNames;
@property (retain) NSMutableDictionary *inputAttachments;
@property (readonly) NSArray *outputAttachmentNames;
@property (retain) NSMutableDictionary *outputAttachments;

- (void).cxx_destruct;
- (id)function_name;
- (id)getFunctionName;
- (id)getGroundTruthAttachment:(id)arg1;
- (id)getInputAttachment:(id)arg1;
- (id)getOutputAttachment:(id)arg1;
- (id)groundTruthAttachmentNames;
- (id)groundTruthAttachments;
- (id)init;
- (id)inputAttachmentNames;
- (id)inputAttachments;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;
- (id)outputAttachmentNames;
- (id)outputAttachments;
- (void)setFunction_name:(id)arg1;
- (void)setGroundTruthAttachments:(id)arg1;
- (void)setInputAttachments:(id)arg1;
- (void)setOutputAttachments:(id)arg1;

@end
