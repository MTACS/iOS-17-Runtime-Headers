
@interface ATXUsageInsightsNotificationEvent : NSObject <ATXUsageInsightsGraphProtocol, NSSecureCoding> {
    NSString * _bundleID;
    unsigned long long  _category;
    NSArray * _contactIDs;
    int  _deliveryType;
    NSDate * _eventTime;
    bool  _isGroupMessage;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly, copy) NSArray *contactIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) int deliveryType;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *eventTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *interruptedBundleID;
@property (nonatomic, readonly) bool isGroupMessage;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned long long)category;
- (id)contactIDs;
- (int)deliveryType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTime;
- (id)initWithBundleID:(id)arg1 category:(unsigned long long)arg2 eventTime:(id)arg3 contactIDs:(id)arg4 isGroupMessage:(bool)arg5 deliveryType:(int)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isGroupMessage;

@end
