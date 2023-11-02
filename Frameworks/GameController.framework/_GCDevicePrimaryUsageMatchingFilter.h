
@interface _GCDevicePrimaryUsageMatchingFilter : NSObject <_GCDeviceMatchingFilter> {
    NSNumber * _primaryUsage;
    NSNumber * _primaryUsagePage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithPrimaryUsagePage:(id)arg1 PrimaryUsage:(id)arg2;
- (bool)match:(id)arg1;

@end
