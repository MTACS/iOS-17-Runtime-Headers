
@interface _MPModelLibraryRequestPropertyFilter : NSObject <NSCopying, NSSecureCoding> {
    long long  _comparisonType;
    NSArray * _keys;
    NSString * _value;
}

@property (nonatomic, readonly) long long comparisonType;
@property (nonatomic, readonly, copy) NSArray *keys;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)comparisonType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeys:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)keys;
- (id)value;

@end
