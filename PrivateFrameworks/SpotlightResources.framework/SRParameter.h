
@interface SRParameter : NSObject <NSCopying> {
    long long  _flag;
    NSString * _name;
    long long  _type;
    NSObject * _value;
}

@property (nonatomic, readonly) long long flag;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSObject *value;

+ (id)boolNil;
+ (id)boolNo;
+ (id)boolYes;
+ (id)doubleMin;
+ (id)doubleNil;
+ (id)filePathNil;
+ (id)longNil;
+ (id)longZero;
+ (id)nilParameterWithType:(long long)arg1;
+ (id)parameterWithBoolean:(bool)arg1 name:(id)arg2;
+ (id)parameterWithDouble:(double)arg1 name:(id)arg2;
+ (id)parameterWithFilePath:(id)arg1 name:(id)arg2;
+ (id)parameterWithLong:(long long)arg1 name:(id)arg2;
+ (id)parameterWithString:(id)arg1 name:(id)arg2;
+ (id)stringNil;
+ (id)typeStringFromParameterType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)flag;
- (id)getBooleanValue;
- (id)getDoubleValue;
- (id)getFilePathNameValue;
- (id)getFilePathValue;
- (id)getLongValue;
- (id)getStringValue;
- (id)initWithBoolean:(bool)arg1 flags:(long long)arg2 name:(id)arg3;
- (id)initWithDouble:(double)arg1 flags:(long long)arg2 name:(id)arg3;
- (id)initWithFilePath:(id)arg1 flags:(long long)arg2 name:(id)arg3;
- (id)initWithLong:(long long)arg1 flags:(long long)arg2 name:(id)arg3;
- (id)initWithString:(id)arg1 flags:(long long)arg2 name:(id)arg3;
- (id)initWithType:(long long)arg1 flags:(long long)arg2 name:(id)arg3;
- (bool)isBool;
- (bool)isDouble;
- (bool)isFilePath;
- (bool)isLong;
- (bool)isNil;
- (bool)isPositiveLong;
- (bool)isString;
- (void)makeNil;
- (id)name;
- (void)setFlag:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)setString:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)typeString;
- (bool)updateWithBoolean:(bool)arg1;
- (bool)updateWithDouble:(double)arg1;
- (bool)updateWithFilePath:(id)arg1;
- (bool)updateWithLong:(long long)arg1;
- (bool)updateWithString:(id)arg1;
- (id)value;

@end
