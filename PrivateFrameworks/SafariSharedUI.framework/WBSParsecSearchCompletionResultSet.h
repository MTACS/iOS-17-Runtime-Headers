
@interface WBSParsecSearchCompletionResultSet : NSObject {
    double  _completionScore;
    NSString * _completionString;
    NSString * _errorCodeString;
    NSString * _feedbackQueryIdentifier;
    double  _maxAge;
    NSArray * _patternStrings;
    NSMutableDictionary * _patternStringsToPatterns;
    NSString * _prefix;
    NSArray * _results;
    NSString * _status;
}

@property (nonatomic, readonly) double completionScore;
@property (nonatomic, readonly) NSString *completionString;
@property (nonatomic, readonly) NSString *errorCodeString;
@property (nonatomic, readonly) NSString *feedbackQueryIdentifier;
@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, copy) NSString *status;

+ (id)resultSetSchemaWithCache:(id)arg1;
+ (id)resultSetWithDictionary:(id)arg1 cache:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1 cache:(id)arg2;
- (double)completionScore;
- (id)completionString;
- (void)enumeratePatternsUsingBlock:(id /* block */)arg1;
- (id)errorCodeString;
- (id)feedbackQueryIdentifier;
- (double)maxAge;
- (id)prefix;
- (id)results;
- (void)setStatus:(id)arg1;
- (id)status;

@end
