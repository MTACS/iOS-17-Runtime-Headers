
@interface SmartReplies.SRSmartRepliesCaption : NSObject <NSCopying, NSSecureCoding> {
    void caption;
    void type;
}

@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)caption;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCaption:(id)arg1 type:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
