
@interface TDMEvaluation : NSObject {
    NSData * _evaluatedElement;
    NSData * _proof;
}

@property (nonatomic, readonly, retain) NSData *evaluatedElement;
@property (nonatomic, readonly, retain) NSData *proof;

- (void).cxx_destruct;
- (id)evaluatedElement;
- (id)initWithEvaluatedElement:(id)arg1 proof:(id)arg2;
- (id)proof;

@end
