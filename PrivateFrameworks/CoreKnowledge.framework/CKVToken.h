
@interface CKVToken : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _beginIndex;
    NSString * _cleanValue;
    unsigned long long  _endIndex;
    bool  _isSignificant;
    bool  _isWhitespace;
    NSArray * _normalizedValues;
    NSString * _value;
}

@property (nonatomic, readonly) unsigned long long beginIndex;
@property (nonatomic, readonly) NSString *cleanValue;
@property (nonatomic, readonly) unsigned long long endIndex;
@property (nonatomic, readonly) bool isSignificant;
@property (nonatomic, readonly) bool isWhitespace;
@property (nonatomic, readonly) NSArray *normalizedValues;
@property (nonatomic, readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)beginIndex;
- (id)cleanValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 cleanValue:(id)arg2 beginIndex:(unsigned long long)arg3 endIndex:(unsigned long long)arg4 isSignificant:(bool)arg5 isWhitespace:(bool)arg6;
- (id)initWithValue:(id)arg1 cleanValue:(id)arg2 beginIndex:(unsigned long long)arg3 endIndex:(unsigned long long)arg4 isSignificant:(bool)arg5 isWhitespace:(bool)arg6 normalizedValues:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToToken:(id)arg1;
- (bool)isSignificant;
- (bool)isWhitespace;
- (id)normalizedValues;
- (id)value;

@end
