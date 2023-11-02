
@interface CPAuthorizationRequestOverrides : NSObject <NSSecureCoding> {
    void alwaysPrompt;
    void confirmReplacement;
    void message;
    void startForEveryone;
    void startForMe;
    void title;
}

@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
