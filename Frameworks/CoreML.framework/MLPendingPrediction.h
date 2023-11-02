
@interface MLPendingPrediction : NSObject {
    id /* block */  _completionHandler;
    <MLPredictionRequest> * _predictionRequest;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) <MLPredictionRequest> *predictionRequest;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithPredictionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)predictionRequest;

@end
