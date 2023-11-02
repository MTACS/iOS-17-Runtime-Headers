
@interface LNResolvableInputMetadata : NSObject <NSCopying, NSSecureCoding> {
    long long  _kind;
    NSString * _queryType;
    LNValueType * _valueType;
}

@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly, copy) NSString *queryType;
@property (nonatomic, readonly, copy) LNValueType *valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryType:(id)arg1;
- (id)initWithValueType:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)kind;
- (id)queryType;
- (id)valueType;

@end
