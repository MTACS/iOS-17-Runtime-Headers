
@interface CNGeminiHandle : NSObject <NSSecureCoding> {
    long long  _handleType;
    NSString * _stringValue;
}

@property (nonatomic, readonly) long long handleType;
@property (nonatomic, readonly, copy) NSString *stringValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)handleType;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 type:(long long)arg2;
- (id)stringValue;

@end
