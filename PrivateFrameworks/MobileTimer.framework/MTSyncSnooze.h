
@interface MTSyncSnooze : NSObject <MTProtoBufferSerializable, MTSerializable, MTSyncable, SYChange> {
    NSDate * _date;
    NSString * _identifier;
    NSDate * _snoozeDate;
    float  _syncVersion;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, retain) NSDate *snoozeDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *syncDate;
@property (nonatomic, readonly) NSString *syncIdentifier;
@property (nonatomic, readonly) unsigned long long syncType;
@property (nonatomic) float syncVersion;

+ (id)deserialize:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)syncSnoozeOfObjectWithIdentifier:(id)arg1 snoozeDate:(id)arg2 date:(id)arg3;
+ (id)syncSnoozeOfObjectWithIdentifier:(id)arg1 snoozeDate:(id)arg2 date:(id)arg3 version:(float)arg4;

- (void).cxx_destruct;
- (long long)changeType;
- (bool)conflicts:(id)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnoozedObjectIdentifier:(id)arg1 snoozeDate:(id)arg2 date:(id)arg3 version:(float)arg4;
- (bool)isEqual:(id)arg1;
- (id)objectIdentifier;
- (id)preferred:(id)arg1;
- (id)sequencer;
- (id)serialize;
- (void)serializeWithSerializer:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSnoozeDate:(id)arg1;
- (void)setSyncVersion:(float)arg1;
- (id)snoozeDate;
- (id)syncDate;
- (id)syncIdentifier;
- (unsigned long long)syncType;
- (float)syncVersion;

@end
