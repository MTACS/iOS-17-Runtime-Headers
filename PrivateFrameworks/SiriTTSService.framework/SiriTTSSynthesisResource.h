
@interface SiriTTSSynthesisResource : NSObject <NSSecureCoding> {
    void language;
    void version;
}

@property (nonatomic, readonly) NSString *assetKey;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) long long version;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
