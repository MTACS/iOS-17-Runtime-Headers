
@interface SAGeofenceEvent : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _eventDate;
    unsigned long long  _eventType;
    CLRegion * _region;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *eventDate;
@property (nonatomic, readonly) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CLRegion *region;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)eventDate;
- (unsigned long long)eventType;
- (id)getDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1 eventType:(unsigned long long)arg2 eventDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)region;

@end
