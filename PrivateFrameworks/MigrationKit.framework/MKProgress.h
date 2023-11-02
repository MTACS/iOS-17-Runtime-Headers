
@interface MKProgress : NSObject {
    unsigned long long  _completedOperationCount;
    double  _startTime;
    unsigned long long  _totalOperationCount;
}

- (void)addCompletedOerationCount:(unsigned long long)arg1;
- (void)addTotalOperationCount:(unsigned long long)arg1;
- (unsigned long long)completedOperationCount;
- (float)progress:(unsigned long long*)arg1;
- (unsigned long long)totalOperationCount;

@end
