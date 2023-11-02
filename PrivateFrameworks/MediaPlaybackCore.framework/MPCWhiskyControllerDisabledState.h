
@interface MPCWhiskyControllerDisabledState : NSObject {
    NSString * _explanation;
    long long  _reason;
}

@property (nonatomic, copy) NSString *explanation;
@property (nonatomic) long long reason;

- (void).cxx_destruct;
- (id)explanation;
- (id)initWithPolicyEvaluation:(id)arg1;
- (long long)reason;
- (void)setExplanation:(id)arg1;
- (void)setReason:(long long)arg1;

@end
