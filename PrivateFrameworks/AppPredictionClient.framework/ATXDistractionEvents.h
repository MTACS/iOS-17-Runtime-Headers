
@interface ATXDistractionEvents : NSObject <NSSecureCoding> {
    NSArray * _allDeliveredNotifications;
    NSArray * _allInterruptingAppSessions;
}

@property (nonatomic, readonly, copy) NSArray *allDeliveredNotifications;
@property (nonatomic, readonly, copy) NSArray *allInterruptingAppSessions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allDeliveredNotifications;
- (id)allInterruptingAppSessions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAllDeliveredNotifications:(id)arg1 allInterruptingAppSessions:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
