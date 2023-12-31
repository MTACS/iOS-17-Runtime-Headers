
@interface WBSParsecSearchResponse : NSObject {
    WBSParsecSearchCompletionResultSet * _bestResultSet;
    NSArray * _completionResultSets;
    double  _maxAge;
    unsigned long long  _sizeInBytes;
}

@property (nonatomic, readonly) WBSParsecSearchCompletionResultSet *bestCompletionResultSet;
@property (nonatomic, readonly) NSArray *completionResultSets;
@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) unsigned long long sizeInBytes;
@property (nonatomic, readonly) NSArray *statusCodesForCompletionResultSets;

+ (id)searchResponseSchemaWithCache:(id)arg1;

- (void).cxx_destruct;
- (id)bestCompletionResultSet;
- (id)completionResultSets;
- (id)initWithArray:(id)arg1 responseHeaders:(id)arg2 sizeInBytes:(unsigned long long)arg3 cache:(id)arg4;
- (double)maxAge;
- (unsigned long long)sizeInBytes;
- (id)statusCodesForCompletionResultSets;

@end
