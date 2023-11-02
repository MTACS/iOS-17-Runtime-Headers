
@interface IMSenderContext_Impl : NSObject <NSSecureCoding> {
    void isFromMe;
    void isKnownSender;
    void serviceName;
}

@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) bool isTrustedSender;
@property (nonatomic, readonly) NSString *serviceName;

+ (id)businessChatContext;
+ (id)businessChatContextWithServiceName:(id)arg1;
+ (id)contextWithKnownSender:(bool)arg1;
+ (id)contextWithKnownSender:(bool)arg1 serviceName:(id)arg2;
+ (id)fromMeContext;
+ (id)fromMeContextWithServiceName:(id)arg1;
+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (id)untrustedContext;
+ (id)untrustedContextWithServiceName:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFromMe;
- (bool)isTrustedSender;
- (id)serviceName;

@end
