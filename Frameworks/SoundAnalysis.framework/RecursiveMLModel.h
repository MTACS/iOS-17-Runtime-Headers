
@interface RecursiveMLModel : NSObject <SNMLModel> {
    void model;
    void modelDescription;
    void outputToInputMap;
    void recursiveInputs;
}

@property (nonatomic, readonly) MLModelDescription *modelDescription;

- (void).cxx_destruct;
- (id)init;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
