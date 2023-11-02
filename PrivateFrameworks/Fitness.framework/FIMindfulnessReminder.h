
@interface FIMindfulnessReminder : NSObject <NSSecureCoding> {
    NSDateComponents * _customDateComponents;
    unsigned long long  _customWeekdaySelection;
    bool  _enabled;
    long long  _type;
}

@property (nonatomic, readonly) NSDateComponents *customDateComponents;
@property (nonatomic, readonly) unsigned long long customWeekdaySelection;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_typeDescription;
- (id)customDateComponents;
- (unsigned long long)customWeekdaySelection;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 customDateComponents:(id)arg2;
- (id)initWithType:(long long)arg1 customDateComponents:(id)arg2 customWeekdaySelection:(unsigned long long)arg3 enabled:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
