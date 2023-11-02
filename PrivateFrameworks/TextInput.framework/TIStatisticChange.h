
@interface TIStatisticChange : NSObject <NSCopying, NSSecureCoding> {
    NSString * _inputMode;
    NSString * _name;
    int  _value;
}

@property (nonatomic, readonly) NSString *inputMode;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int value;

+ (id)statisticChangeWithName:(id)arg1 andValue:(int)arg2 andInputMode:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 andValue:(int)arg2 andInputMode:(id)arg3;
- (id)inputMode;
- (id)name;
- (int)value;

@end
