
@interface SAConnectionEvent : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    NSUUID * _identifier;
    long long  _state;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1 state:(long long)arg2 date:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)state;

@end
