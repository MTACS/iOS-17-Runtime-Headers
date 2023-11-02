
@interface DNDSLegacyBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSSecureCoding> {
    NSString * _calendarIdentifier;
    NSDateComponents * _endComponents;
    NSUUID * _identifier;
    unsigned long long  _repeatInterval;
    NSDateComponents * _startComponents;
}

@property (nonatomic, readonly, copy) NSString *calendarIdentifier;
@property (nonatomic, readonly, copy) NSDateComponents *endComponents;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long repeatInterval;
@property (nonatomic, readonly, copy) NSDateComponents *startComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endComponents;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 identifier:(id)arg5;
- (unsigned long long)repeatInterval;
- (id)startComponents;

@end
