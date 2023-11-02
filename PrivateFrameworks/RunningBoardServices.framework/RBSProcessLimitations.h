
@interface RBSProcessLimitations : NSObject <RBSXPCSecureCoding> {
    double  _runTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double runTime;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (double)runTime;
- (void)setRunTime:(double)arg1;

@end
