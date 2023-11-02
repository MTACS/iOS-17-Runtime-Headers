
@interface PKStoreId : NSObject <NSSecureCoding> {
    void underlyingStoreId;
}

@property (nonatomic, readonly) long long longValue;
@property (nonatomic, readonly) NSNumber *numberValue;
@property (nonatomic, readonly) NSString *stringValue;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithNumber:(id)arg1;
- (id)initWithString:(id)arg1;
- (long long)longValue;
- (id)numberValue;
- (id)stringValue;

@end
