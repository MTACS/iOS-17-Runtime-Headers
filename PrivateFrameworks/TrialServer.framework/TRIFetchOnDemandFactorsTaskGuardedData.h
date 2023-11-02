
@interface TRIFetchOnDemandFactorsTaskGuardedData : NSObject {
    NSMutableSet * downloadableFactorNames;
    NSDate * earliestRetryDate;
    NSError * fetchError;
    NSMutableArray * fetchOperations;
    int  overallStatus;
}

- (void).cxx_destruct;
- (id)description;

@end
