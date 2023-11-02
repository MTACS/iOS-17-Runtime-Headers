
@interface ATXDeviceUsageEvents : NSObject <NSSecureCoding> {
    NSArray * _continuousDeviceUsageEvents;
    NSArray * _mindlessCyclingEvents;
}

@property (nonatomic, readonly, copy) NSArray *continuousDeviceUsageEvents;
@property (nonatomic, readonly, copy) NSArray *mindlessCyclingEvents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)continuousDeviceUsageEvents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContinuousDeviceUsageEvent:(id)arg1 mindlessCyclingEvents:(id)arg2;
- (id)mindlessCyclingEvents;

@end
