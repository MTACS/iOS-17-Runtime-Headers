
@interface NCEventTrackerNotificationMetadata : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    NSDate * _date;
    NSString * _notificationIdentifier;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *notificationIdentifier;

+ (id)metadataForNotificationRequest:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithNotificationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 date:(id)arg3;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)notificationIdentifier;

@end
