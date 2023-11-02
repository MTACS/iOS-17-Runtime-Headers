
@interface CBOR : NSObject <NSCopying> {
    NSArray * _orderedKeys;
    CBOR * _tag;
    unsigned long long  _type;
    id  _value;
    long long  _valueSize;
}

@property (nonatomic, readonly) NSArray *array;
@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) bool isBoolean;
@property (nonatomic, readonly) bool isDate;
@property (nonatomic, readonly) bool isFloatNumber;
@property (nonatomic, readonly) bool isWholeNumber;
@property (nonatomic, readonly) long long longLongValue;
@property (nonatomic, readonly) NSNumber *numeric;
@property (nonatomic, retain) NSArray *orderedKeys;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, retain) CBOR *tag;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long unsignedLongLongValue;
@property (nonatomic, retain) id value;
@property (nonatomic) long long valueSize;

+ (id)cborFalse;
+ (id)cborNil;
+ (id)cborTrue;
+ (id)cborWithArray:(id)arg1;
+ (id)cborWithCOSE:(id)arg1;
+ (id)cborWithCOSEKey:(id)arg1;
+ (id)cborWithData:(id)arg1;
+ (id)cborWithDateTime:(id)arg1;
+ (id)cborWithDictionary:(id)arg1;
+ (id)cborWithDictionary:(id)arg1 keyOrderList:(id)arg2;
+ (id)cborWithDouble:(double)arg1;
+ (id)cborWithFloat:(float)arg1;
+ (id)cborWithFullDate:(id)arg1;
+ (id)cborWithHalfFloat:(float)arg1;
+ (id)cborWithInteger:(long long)arg1;
+ (id)cborWithUTF8String:(id)arg1;
+ (id)cborWithUnsignedInteger:(unsigned long long)arg1;
+ (id)decodeFromData:(id)arg1;

- (void).cxx_destruct;
- (id)array;
- (id)asJSON;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)date;
- (id)description;
- (id)dictionary;
- (double)doubleValue;
- (unsigned long long)hash;
- (id)initWithCbor:(id)arg1 tag:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2 valueSize:(long long)arg3 tag:(id)arg4;
- (bool)isBoolean;
- (bool)isDate;
- (bool)isEqual:(id)arg1;
- (bool)isFloatNumber;
- (bool)isWholeNumber;
- (long long)longLongValue;
- (id)numeric;
- (id)orderedKeys;
- (void)setOrderedKeys:(id)arg1;
- (void)setTag:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueSize:(long long)arg1;
- (id)string;
- (id)tag;
- (unsigned long long)type;
- (unsigned long long)unsignedLongLongValue;
- (id)value;
- (long long)valueSize;

@end
