
@interface ATXUserNotificationResolution : NSObject {
    NSUUID * _notificationUUID;
    unsigned long long  _numExpansions;
    NSDate * _resolutionTimestamp;
    long long  _resolutionType;
}

@property (nonatomic, readonly) NSUUID *notificationUUID;
@property (nonatomic, readonly) unsigned long long numExpansions;
@property (nonatomic, readonly) NSDate *resolutionTimestamp;
@property (nonatomic, readonly) long long resolutionType;

- (void).cxx_destruct;
- (id)initWithNotificationUUID:(id)arg1 numExpansions:(unsigned long long)arg2 resolutionType:(long long)arg3 resolutionTimestamp:(id)arg4;
- (id)notificationUUID;
- (unsigned long long)numExpansions;
- (id)resolutionTimestamp;
- (long long)resolutionType;

@end
