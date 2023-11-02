
@interface WBSHistoryVisitsWithItemsPredicate : NSObject <WBSHistoryVisitPredicate> {
    WBSSetInt64 * _ignoredVisitIdentifiers;
    WBSSetInt64 * _itemIdentifiers;
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
- (id)initWithHistoryItems:(id)arg1 ignoreVisits:(id)arg2;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4;

@end
