
@interface SUCoreProgress : NSObject <NSSecureCoding> {
    NSString * _actionText;
    bool  _disableVerboseLogging;
    double  _estimatedTimeRemaining;
    bool  _isStalled;
    NSString * _phase;
    float  _portionComplete;
    NSString * _taskDescription;
    long long  _totalExpectedBytes;
    long long  _totalWrittenBytes;
}

@property (nonatomic, retain) NSString *actionText;
@property (nonatomic) bool disableVerboseLogging;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) bool isStalled;
@property (nonatomic, retain) NSString *phase;
@property (nonatomic) float portionComplete;
@property (nonatomic, retain) NSString *taskDescription;
@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) long long totalWrittenBytes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionText;
- (id)copy;
- (id)description;
- (bool)disableVerboseLogging;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedTimeRemaining;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhase:(id)arg1 isStalled:(bool)arg2 portionComplete:(float)arg3 remaining:(double)arg4;
- (id)initWithPhase:(id)arg1 isStalled:(bool)arg2 portionComplete:(float)arg3 remaining:(double)arg4 actionText:(id)arg5;
- (id)initWithPhase:(id)arg1 isStalled:(bool)arg2 portionComplete:(float)arg3 totalWrittenBytes:(long long)arg4 totalExpectedBytes:(long long)arg5 remaining:(double)arg6;
- (id)initWithPhase:(id)arg1 isStalled:(bool)arg2 portionComplete:(float)arg3 totalWrittenBytes:(long long)arg4 totalExpectedBytes:(long long)arg5 remaining:(double)arg6 actionText:(id)arg7 taskDescription:(id)arg8;
- (id)initWithPhase:(id)arg1 isStalled:(bool)arg2 portionComplete:(float)arg3 totalWrittenBytes:(long long)arg4 totalExpectedBytes:(long long)arg5 remaining:(double)arg6 taskDescription:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isStalled;
- (id)phase;
- (float)portionComplete;
- (bool)sameProgress:(id)arg1 isStalled:(bool)arg2 portion:(float)arg3 remaining:(double)arg4;
- (bool)sameProgress:(id)arg1 isStalled:(bool)arg2 portion:(float)arg3 remaining:(double)arg4 actionText:(id)arg5;
- (void)setActionText:(id)arg1;
- (void)setDisableVerboseLogging:(bool)arg1;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setPhase:(id)arg1;
- (void)setPortionComplete:(float)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTotalExpectedBytes:(long long)arg1;
- (void)setTotalWrittenBytes:(long long)arg1;
- (id)summary;
- (id)taskDescription;
- (long long)totalExpectedBytes;
- (long long)totalWrittenBytes;

@end
