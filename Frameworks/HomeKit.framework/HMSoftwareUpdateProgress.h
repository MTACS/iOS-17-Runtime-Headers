
@interface HMSoftwareUpdateProgress : HMFObject {
    double  _estimatedTimeRemaining;
    float  _percentageComplete;
}

@property (readonly) double estimatedTimeRemaining;
@property (readonly) float percentageComplete;

+ (id)progressFromEvent:(id)arg1;

- (double)estimatedTimeRemaining;
- (id)initWithPercentageComplete:(float)arg1 estimatedTimeRemaining:(double)arg2;
- (id)initWithProtoPayload:(id)arg1;
- (float)percentageComplete;
- (id)protoPayload;

@end
