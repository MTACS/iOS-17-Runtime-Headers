
@interface ATXCorrelationMatrixGuardedData : NSObject {
    NSMutableDictionary * _correlationMatrix;
    NSMutableDictionary * _locationTotals;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCorrelationMatrix:(id)arg1 locationTotals:(id)arg2;

@end
