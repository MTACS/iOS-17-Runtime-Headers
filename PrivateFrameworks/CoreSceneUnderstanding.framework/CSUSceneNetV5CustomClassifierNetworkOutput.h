
@interface CSUSceneNetV5CustomClassifierNetworkOutput : NSObject {
    <CSUBuffer> * _classificationLikelihoods;
}

@property (readonly) <CSUBuffer> *classificationLikelihoods;

- (void).cxx_destruct;
- (id)classificationLikelihoods;
- (id)initWithClassificationLikelihoods:(id)arg1;

@end
