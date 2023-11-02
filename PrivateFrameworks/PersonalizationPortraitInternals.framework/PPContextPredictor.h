
@interface PPContextPredictor : NSObject {
    NSObject<OS_dispatch_queue> * _coremlQueue;
    NSString * _language;
    MLModel * _mlModel;
}

- (void).cxx_destruct;
- (id)contextForSentence:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (id)initWithMLModel:(id)arg1 language:(id)arg2;

@end
