
@interface _DKEventAdapter : NSObject {
    NSArray * _customMetadata;
    _DKEvent * _dkEvent;
    NSNumber * _endDayOfWeek;
    NSNumber * _startDayOfWeek;
    NSDictionary * _structuredMetadata;
}

@property (nonatomic, retain) _DKEvent *dkEvent;

- (void).cxx_destruct;
- (id)UUID;
- (bool)boolValue;
- (long long)compatibilityVersion;
- (double)confidence;
- (id)creationDate;
- (id)customMetadata;
- (id)dkEvent;
- (double)doubleValue;
- (id)endDate;
- (long long)endDayOfWeek;
- (long long)endSecondOfDay;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (id)localCreationDate;
- (id)metadata;
- (long long)secondsFromGMT;
- (void)setDkEvent:(id)arg1;
- (id)source;
- (id)startDate;
- (long long)startDayOfWeek;
- (long long)startSecondOfDay;
- (id)stream;
- (id)streamName;
- (id)stringValue;
- (id)structuredMetadata;
- (id)timeZone;
- (id)uuid;
- (id)uuidHash;
- (id)value;
- (short)valueClass;
- (double)valueDouble;
- (long long)valueInteger;
- (id)valueString;
- (long long)valueTypeCode;

@end
