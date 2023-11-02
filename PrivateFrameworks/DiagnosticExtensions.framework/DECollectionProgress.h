
@interface DECollectionProgress : NSObject <NSSecureCoding> {
    NSNumber * _estimatedTimeRemaining;
    double  _percentComplete;
    NSString * _statusString;
}

@property (nonatomic, retain) NSNumber *estimatedTimeRemaining;
@property (nonatomic) double percentComplete;
@property (nonatomic, retain) NSString *statusString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedTimeRemaining;
- (id)initWithCoder:(id)arg1;
- (id)initWithPercentComplete:(double)arg1;
- (id)initWithPercentComplete:(double)arg1 withEstimatedTimeRemaining:(id)arg2;
- (double)percentComplete;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setStatusString:(id)arg1;
- (id)statusString;

@end
