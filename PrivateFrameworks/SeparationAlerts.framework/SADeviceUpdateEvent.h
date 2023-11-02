
@interface SADeviceUpdateEvent : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    SADevice * _device;
    unsigned long long  _eventType;
    bool  _lastEvent;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SADevice *device;
@property (nonatomic, readonly) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool lastEvent;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (unsigned long long)eventType;
- (id)getDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 eventType:(unsigned long long)arg2 lastEvent:(bool)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)lastEvent;

@end
