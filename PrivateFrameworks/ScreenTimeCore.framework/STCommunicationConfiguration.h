
@interface STCommunicationConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _isCommunicationSafetyAnalyticsEnabled;
    bool  _isCommunicationSafetyNotificationEnabled;
    bool  _isCommunicationSafetyReceivingRestricted;
    bool  _isCommunicationSafetySendingRestricted;
}

@property (readonly) bool isCommunicationSafetyAnalyticsEnabled;
@property (readonly) bool isCommunicationSafetyNotificationEnabled;
@property (readonly) bool isCommunicationSafetyReceivingRestricted;
@property (readonly) bool isCommunicationSafetySendingRestricted;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommunicationSafetySendingRestricted:(bool)arg1 communicationSafetyReceivingRestricted:(bool)arg2 communicationSafetyNotificationEnabled:(bool)arg3 communicationSafetyAnalyticsEnabled:(bool)arg4;
- (bool)isCommunicationSafetyAnalyticsEnabled;
- (bool)isCommunicationSafetyNotificationEnabled;
- (bool)isCommunicationSafetyReceivingRestricted;
- (bool)isCommunicationSafetySendingRestricted;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCommunicationConfiguration:(id)arg1;

@end
