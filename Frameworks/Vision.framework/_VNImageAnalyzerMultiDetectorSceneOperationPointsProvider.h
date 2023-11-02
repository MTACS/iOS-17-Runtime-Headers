
@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding> {
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache * _operationPointsCache;
    VNRequestSpecifier * _originatingRequestSpecifier;
}

- (void).cxx_destruct;
- (id)initWithOperationPointsCache:(id)arg1 originatingRequestSpecifier:(id)arg2;
- (id)operationPointsAndReturnError:(id*)arg1;

@end
