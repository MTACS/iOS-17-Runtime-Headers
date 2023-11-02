
@interface DIHandle : NSObject <NSSecureCoding> {
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSString *value;

+ (id)stringForHandleType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)type;
- (id)value;

@end
