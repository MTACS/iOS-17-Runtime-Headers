
@interface ActivityUIServices.ActivityUpdateProvider : NSObject <ActivityUIServices.ActivityUpdateProviding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activityDescriptor;
    void activityIdentifier;
    void activityState;
    void descriptor;
    void systemMetricsRequest;
}

@property (nonatomic) long long activityState;
@property (nonatomic, retain) ACActivityDescriptor *descriptor;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (long long)activityState;
- (id)descriptor;
- (id)identifier;
- (id)init;
- (id)initWithActivityDescriptor:(id)arg1 activityState:(long long)arg2 systemMetricsRequest:(id)arg3;
- (void)setActivityState:(long long)arg1;
- (void)setDescriptor:(id)arg1;

@end
