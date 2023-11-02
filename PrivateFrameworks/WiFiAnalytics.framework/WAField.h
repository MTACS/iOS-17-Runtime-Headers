
@interface WAField : NSObject <NSCopying, NSSecureCoding> {
    bool  _isRepeatable;
    NSString * _key;
    long long  _type;
    NSString * _typeInfoForRepeatableSubmessage;
    id  _value;
}

@property (nonatomic) bool boolValue;
@property (nonatomic, retain) NSData *bytesValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) float floatValue;
@property (nonatomic) int int32Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) bool isRepeatable;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSMutableArray *repeatableValues;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, retain) WAMessageAWD *subMessageValue;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int uint32Value;
@property (nonatomic) unsigned long long uint64Value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addRepeatableValue:(id)arg1;
- (id)_ownTypeAsString;
- (void)_throwIncorrecTypeExceptionForType:(long long)arg1 isGet:(bool)arg2;
- (void)_throwIncorrectRepeatableStateExceptionAsFieldShouldBeRepeatable:(bool)arg1 isGet:(bool)arg2 forType:(long long)arg3;
- (id)_typeAsString:(long long)arg1;
- (void)addRepeatableBoolValue:(bool)arg1;
- (void)addRepeatableBytes:(id)arg1;
- (void)addRepeatableDoubleValue:(double)arg1;
- (void)addRepeatableFloatValue:(float)arg1;
- (void)addRepeatableInt32Value:(int)arg1;
- (void)addRepeatableInt64Value:(long long)arg1;
- (void)addRepeatableString:(id)arg1;
- (void)addRepeatableSubMessageValue:(id)arg1;
- (void)addRepeatableUInt32Value:(unsigned int)arg1;
- (void)addRepeatableUInt64Value:(unsigned long long)arg1;
- (bool)boolValue;
- (id)bytesValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 isRepeatable:(bool)arg2 andKey:(id)arg3 andTypeInfoForRepeatableSubmessage:(id)arg4;
- (id)initWithType:(long long)arg1 isRepeatable:(bool)arg2 key:(id)arg3 repeatableValues:(id)arg4 doubleValue:(double)arg5 floatValue:(float)arg6 int32Value:(int)arg7 int64Value:(long long)arg8 uint32Val:(unsigned int)arg9 uint64Value:(unsigned long long)arg10 boolValue:(bool)arg11 stringValue:(id)arg12 bytesValue:(id)arg13 subMessageValue:(id)arg14 andTypeInfoForRepeatableSubmessage:(id)arg15;
- (int)int32Value;
- (long long)int64Value;
- (bool)isNumerical;
- (bool)isRepeatable;
- (id)key;
- (id)repeatableValues;
- (void)setBoolValue:(bool)arg1;
- (void)setBytesValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setInt32Value:(int)arg1;
- (void)setInt64Value:(long long)arg1;
- (void)setIsRepeatable:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setRepeatableValues:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setSubMessageValue:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setTypeInformationForRepeatableSubmessage:(id)arg1;
- (void)setUint32Value:(unsigned int)arg1;
- (void)setUint64Value:(unsigned long long)arg1;
- (id)stringValue;
- (id)subMessageValue;
- (long long)type;
- (id)typeInformationForRepeatableSubmessage;
- (unsigned int)uint32Value;
- (unsigned long long)uint64Value;

@end
