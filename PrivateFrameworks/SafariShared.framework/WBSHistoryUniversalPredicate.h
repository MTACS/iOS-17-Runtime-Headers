
@interface WBSHistoryUniversalPredicate : NSObject <WBSHistoryVisitPredicate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateServiceVisit:(id)arg1;
- (bool)evaluateVisit:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4;

@end
