
@interface CMSuppressionEvent : CMLogItem {
    unsigned long long  fReason;
    long long  fType;
}

@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) long long type;

+ (id)stringForEventReason:(unsigned long long)arg1;
+ (id)stringForEventType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 reason:(unsigned long long)arg2 timestamp:(double)arg3;
- (unsigned long long)reason;
- (long long)type;

@end
