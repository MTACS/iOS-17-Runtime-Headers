
@interface CLMonitoringRecord : NSObject <NSSecureCoding> {
    CLCondition * _condition;
    CLMonitoringEvent * _lastEvent;
    unsigned long long  _options;
}

@property (readonly) CLCondition *condition;
@property (readonly) CLCondition *constraint;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) CLMonitoringEvent *lastEvent;
@property (nonatomic, readonly) unsigned long long options;

+ (bool)supportsSecureCoding;

- (id)condition;
- (id)constraint;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initRecordWithCondition:(id)arg1 identifier:(id)arg2;
- (id)initRecordWithCondition:(id)arg1 identifier:(id)arg2 options:(unsigned long long)arg3;
- (id)initRecordWithCondition:(id)arg1 identifier:(id)arg2 options:(unsigned long long)arg3 initialState:(unsigned long long)arg4;
- (id)initRecordWithCondition:(id)arg1 options:(unsigned long long)arg2 event:(id)arg3;
- (id)initRecordWithMonitoringRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastEvent;
- (unsigned long long)options;
- (void)updateEvent:(id)arg1;

@end
