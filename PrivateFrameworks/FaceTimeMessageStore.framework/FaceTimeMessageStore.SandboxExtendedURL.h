
@interface FaceTimeMessageStore.SandboxExtendedURL : NSObject <NSSecureCoding> {
    void sandboxExtensionClass;
    void sandboxExtensionHandle;
    void sandboxExtensionToken;
    void url;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
