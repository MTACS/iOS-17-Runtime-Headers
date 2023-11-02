
@interface SUControllerProgress : NSObject <NSSecureCoding> {
    NSString * _actionText;
    double  _estimatedTimeRemaining;
    bool  _isDone;
    bool  _isStalled;
    NSString * _phase;
    float  _portionComplete;
}

@property (nonatomic, retain) NSString *actionText;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) bool isDone;
@property (nonatomic) bool isStalled;
@property (nonatomic, retain) NSString *phase;
@property (nonatomic) float portionComplete;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionText;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedTimeRemaining;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhase:(id)arg1 portion:(float)arg2 remaining:(double)arg3 isDone:(bool)arg4;
- (bool)isDone;
- (bool)isEqual:(id)arg1;
- (bool)isStalled;
- (id)phase;
- (float)portionComplete;
- (bool)sameProgress:(id)arg1 portion:(float)arg2 remaining:(double)arg3 isDone:(bool)arg4;
- (bool)sameProgress:(id)arg1 portion:(float)arg2 remaining:(double)arg3 isDone:(bool)arg4 actionText:(id)arg5;
- (bool)sameProgress:(id)arg1 portion:(float)arg2 remaining:(double)arg3 isDone:(bool)arg4 actionText:(id)arg5 isStalled:(bool)arg6;
- (void)setActionText:(id)arg1;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setIsDone:(bool)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setPhase:(id)arg1;
- (void)setPortionComplete:(float)arg1;

@end
