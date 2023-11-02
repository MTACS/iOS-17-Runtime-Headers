
@interface VNOperationPointsProvider : NSObject <VNOperationPointsProviding> {
    VNOperationPoints * _operationPoints;
}

- (void).cxx_destruct;
- (id)initWithOperationPoints:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)operationPointsAndReturnError:(id*)arg1;

@end
