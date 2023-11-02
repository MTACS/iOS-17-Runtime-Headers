
@interface USOSpanProperty : NSObject <NSSecureCoding> {
    NSString * _key;
    NSNumber * _valueFloat;
    NSNumber * _valueInt;
    NSString * _valueString;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSNumber *valueFloat;
@property (nonatomic, readonly) NSNumber *valueInt;
@property (nonatomic, readonly) NSString *valueString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 valueFloat:(float)arg2;
- (id)initWithKey:(id)arg1 valueInt:(int)arg2;
- (id)initWithKey:(id)arg1 valueString:(id)arg2;
- (id)key;
- (id)valueFloat;
- (id)valueInt;
- (id)valueString;

@end
