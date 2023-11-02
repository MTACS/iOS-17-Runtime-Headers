
@interface IMSenderContext : NSObject <NSSecureCoding> {
    IMSenderContext_Impl * swiftImpl;
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
+ (bool)supportsSecureCoding;
+ (id)untrustedContext;
+ (id)untrustedContextWithServiceName:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderContext_Impl:(id)arg1;
- (bool)isFromMe;
- (bool)isTrustedSender;
- (id)serviceName;

@end
