
@interface SASafeLocationUpdateEvent : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    unsigned long long  _eventType;
    bool  _lastEvent;
    SASafeLocation * _safeLocation;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool lastEvent;
@property (nonatomic, readonly, copy) SASafeLocation *safeLocation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (unsigned long long)eventType;
- (id)getDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithSafeLocation:(id)arg1 eventType:(unsigned long long)arg2 lastEvent:(bool)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)lastEvent;
- (id)safeLocation;

@end
