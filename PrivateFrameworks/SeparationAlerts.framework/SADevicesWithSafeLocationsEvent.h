
@interface SADevicesWithSafeLocationsEvent : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    NSDictionary * _devices;
    NSDictionary * _safeLocations;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *safeLocations;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevices:(id)arg1 safeLocationUUIDs:(id)arg2 date:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)safeLocations;

@end
