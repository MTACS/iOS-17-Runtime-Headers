
@interface RWIProtocolPageUserPreference : RWIProtocolJSONObject

@property (nonatomic) long long name;
@property (nonatomic) long long value;

- (id)initWithName:(long long)arg1 value:(long long)arg2;
- (long long)name;
- (void)setName:(long long)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;

@end
