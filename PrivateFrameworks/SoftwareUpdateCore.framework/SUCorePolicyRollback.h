
@interface SUCorePolicyRollback : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    NSDictionary * _baseRollbackOptions;
    bool  _performPhase;
    bool  _performRollbackApplyPhase;
    bool  _performRollbackPreparePhase;
    bool  _performRollbackResumePhase;
    bool  _performRollbackSuspendPhase;
    bool  _skipCancelPreviousUpdate;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic, retain) NSDictionary *baseRollbackOptions;
@property (nonatomic) bool performPhase;
@property (nonatomic) bool performRollbackApplyPhase;
@property (nonatomic) bool performRollbackPreparePhase;
@property (nonatomic) bool performRollbackResumePhase;
@property (nonatomic) bool performRollbackSuspendPhase;
@property (nonatomic) bool skipCancelPreviousUpdate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
- (id)baseRollbackOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)performPhase;
- (bool)performRollbackApplyPhase;
- (bool)performRollbackPreparePhase;
- (bool)performRollbackResumePhase;
- (bool)performRollbackSuspendPhase;
- (void)setAdditionalOptions:(id)arg1;
- (void)setBaseRollbackOptions:(id)arg1;
- (void)setPerformPhase:(bool)arg1;
- (void)setPerformRollbackApplyPhase:(bool)arg1;
- (void)setPerformRollbackPreparePhase:(bool)arg1;
- (void)setPerformRollbackResumePhase:(bool)arg1;
- (void)setPerformRollbackSuspendPhase:(bool)arg1;
- (void)setSkipCancelPreviousUpdate:(bool)arg1;
- (bool)skipCancelPreviousUpdate;
- (id)summary;

@end
