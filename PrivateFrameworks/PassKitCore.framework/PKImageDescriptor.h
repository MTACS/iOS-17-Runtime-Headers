
@interface PKImageDescriptor : NSObject <NSSecureCoding> {
    bool  _hasBackground;
    long long  _tintColor;
    long long  _type;
}

@property (nonatomic, readonly) bool hasBackground;
@property (nonatomic, readonly) long long tintColor;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)hasBackground;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)tintColor;
- (long long)type;

@end
