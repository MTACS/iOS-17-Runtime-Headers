
@interface PKBannerHandleRequest : NSObject <NSSecureCoding> {
    long long  _type;
}

@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)type;

@end
