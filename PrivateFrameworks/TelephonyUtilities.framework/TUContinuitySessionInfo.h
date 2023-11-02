
@interface TUContinuitySessionInfo : NSObject <NSSecureCoding> {
    TUNearbyDeviceHandle * _device;
    NSArray * _recentCalls;
    NSDictionary * _recentCallsContacts;
}

@property (nonatomic, readonly) TUNearbyDeviceHandle *device;
@property (nonatomic, readonly) NSArray *recentCalls;
@property (nonatomic, readonly) NSDictionary *recentCallsContacts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 recentCalls:(id)arg2 recentCallsContacts:(id)arg3;
- (id)recentCalls;
- (id)recentCallsContacts;

@end
