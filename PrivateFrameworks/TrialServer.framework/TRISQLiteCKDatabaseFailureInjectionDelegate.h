
@interface TRISQLiteCKDatabaseFailureInjectionDelegate : NSObject <NSSecureCoding, TRISQLiteCKDatabaseDelegate> {
    NSMutableArray * _fetchErrors;
    NSMutableArray * _queryErrors;
}

@property (nonatomic, retain) NSMutableArray *fetchErrors;
@property (nonatomic, retain) NSMutableArray *queryErrors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchErrors;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrorForAllOperations:(id)arg1;
- (id)initWithQueryErrors:(id)arg1 fetchErrors:(id)arg2;
- (id)queryErrors;
- (void)setFetchErrors:(id)arg1;
- (void)setQueryErrors:(id)arg1;
- (bool)shouldProcessFetchOperation:(id)arg1 error:(id*)arg2;
- (bool)shouldProcessQueryOperation:(id)arg1 error:(id*)arg2;

@end
