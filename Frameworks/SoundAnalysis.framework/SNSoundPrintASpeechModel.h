
@interface SNSoundPrintASpeechModel : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

+ (id)URLOfModelInThisBundle;
+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithMLModel:(id)arg1;
- (id)model;
- (void)predictionFromFeatures:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionFromInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 error:(id*)arg4;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
