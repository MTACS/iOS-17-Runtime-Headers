
@interface RBSDurationAttribute : RBSAttribute {
    unsigned long long  _endPolicy;
    double  _invalidationDuration;
    unsigned long long  _startPolicy;
    double  _warningDuration;
}

@property (nonatomic) unsigned long long endPolicy;
@property (nonatomic) double invalidationDuration;
@property (nonatomic) unsigned long long startPolicy;
@property (nonatomic) double warningDuration;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithDuration:(double)arg1;
+ (id)attributeWithDuration:(double)arg1 warningDuration:(double)arg2 startPolicy:(unsigned long long)arg3 endPolicy:(unsigned long long)arg4;
+ (id)invalidateAfterInterval:(double)arg1;
+ (id)terminateAfterInterval:(double)arg1;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)endPolicy;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (double)invalidationDuration;
- (bool)isEqual:(id)arg1;
- (void)setEndPolicy:(unsigned long long)arg1;
- (void)setInvalidationDuration:(double)arg1;
- (void)setStartPolicy:(unsigned long long)arg1;
- (void)setWarningDuration:(double)arg1;
- (unsigned long long)startPolicy;
- (double)warningDuration;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (bool)allowedWithAttribute:(id)arg1 error:(id*)arg2;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
