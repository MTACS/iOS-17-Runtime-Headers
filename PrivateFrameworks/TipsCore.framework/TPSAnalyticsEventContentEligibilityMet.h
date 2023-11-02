
@interface TPSAnalyticsEventContentEligibilityMet : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _contentID;
    unsigned long long  _displayType;
    NSArray * _eligibleContext;
    unsigned long long  _usageFlags;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) NSArray *eligibleContext;
@property (nonatomic, readonly) unsigned long long usageFlags;

+ (id)eventWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 usageFlags:(unsigned long long)arg5 date:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 usageFlags:(unsigned long long)arg5 date:(id)arg6;
- (id)bundleID;
- (id)contentID;
- (unsigned long long)displayType;
- (id)duetEvent;
- (id)eligibleContext;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (unsigned long long)usageFlags;

@end
