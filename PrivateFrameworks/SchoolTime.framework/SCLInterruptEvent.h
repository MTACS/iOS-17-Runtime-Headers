
@interface SCLInterruptEvent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    SCLContact * _sender;
    unsigned long long  _type;
    unsigned long long  _urgency;
}

@property (nonatomic, readonly) SCLContact *sender;
@property (nonatomic, readonly) bool shouldAlwaysInterrupt;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long urgency;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithEvent:(id)arg1;
- (id)_initWithType:(unsigned long long)arg1 urgency:(unsigned long long)arg2 sender:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sender;
- (bool)shouldAlwaysInterrupt;
- (unsigned long long)type;
- (unsigned long long)urgency;

@end
