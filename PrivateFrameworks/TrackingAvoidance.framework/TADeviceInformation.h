
@interface TADeviceInformation : NSObject <OSLogCoding, TAEventProtocol> {
    TASPAdvertisement * _advertisement;
    NSDate * _date;
    unsigned long long  _deviceType;
    unsigned long long  _notificationState;
}

@property (nonatomic, readonly) TASPAdvertisement *advertisement;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long notificationState;
@property (readonly) Class superclass;

+ (id)deviceTypeToString:(unsigned long long)arg1;
+ (id)notificationStateToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (unsigned long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTASPAdvertisement:(id)arg1 deviceType:(unsigned long long)arg2 notificationState:(unsigned long long)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)notificationState;

@end
