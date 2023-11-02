
@interface _MLServiceS : NSObject {
    void connection;
    void modelName;
    void service;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)getModelStatsWithCompletionHandler:(id /* block */)arg1;
- (double)getPredictionWithInputFeatures:(id)arg1;
- (id)init;
- (id)initWithNameOfModel:(id)arg1;
- (void)writeWithData:(id)arg1;

@end
