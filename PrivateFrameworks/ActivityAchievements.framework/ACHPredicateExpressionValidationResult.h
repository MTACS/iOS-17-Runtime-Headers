
@interface ACHPredicateExpressionValidationResult : NSObject {
    NSArray * _issues;
    bool  _valid;
}

@property (nonatomic, readonly, retain) NSArray *issues;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)initWithValid:(bool)arg1 issues:(id)arg2;
- (bool)isValid;
- (id)issues;

@end
