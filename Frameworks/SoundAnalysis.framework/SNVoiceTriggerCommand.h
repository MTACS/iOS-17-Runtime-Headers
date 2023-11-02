
@interface SNVoiceTriggerCommand : NSObject {
    double  _confidenceThreshold;
    long long  _minDurationBlocks;
    NSString * _name;
}

@property (nonatomic, readonly) double confidenceThreshold;
@property (nonatomic, readonly) long long minDurationBlocks;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (double)confidenceThreshold;
- (long long)minDurationBlocks;
- (id)name;

@end
