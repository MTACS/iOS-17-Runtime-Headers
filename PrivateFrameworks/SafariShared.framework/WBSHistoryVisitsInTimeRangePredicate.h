
@interface WBSHistoryVisitsInTimeRangePredicate : NSObject <WBSHistoryVisitPredicate> {
    double  _endTime;
    double  _startTime;
    NSData * _urlHash;
    NSData * _urlSalt;
    NSString * _urlString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateServiceVisit:(id)arg1;
- (bool)evaluateVisit:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 urlString:(id)arg3 urlHash:(id)arg4 urlSalt:(id)arg5;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4;

@end
