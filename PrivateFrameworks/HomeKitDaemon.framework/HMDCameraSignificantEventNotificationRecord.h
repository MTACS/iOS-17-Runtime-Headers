
@interface HMDCameraSignificantEventNotificationRecord : HMFObject <NSCopying> {
    NSUUID * _UUID;
    NSDate * _date;
    unsigned long long  _notificationReasons;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSDate *date;
@property (readonly) unsigned long long notificationReasons;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 notificationReasons:(unsigned long long)arg2 date:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)notificationReasons;

@end
