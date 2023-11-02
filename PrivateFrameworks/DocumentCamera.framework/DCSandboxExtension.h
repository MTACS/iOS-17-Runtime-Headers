
@interface DCSandboxExtension : NSObject <NSSecureCoding> {
    bool  _canAccessFileURL;
    NSURL * _fileURL;
    long long  _sandboxExtensionHandle;
    bool  _shouldIssueSandboxExtensionWhenEncoding;
}

@property (nonatomic, readonly) bool canAccessFileURL;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic, readonly) bool shouldIssueSandboxExtensionWhenEncoding;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canAccessFileURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)relinquish;
- (long long)sandboxExtensionHandle;
- (void)setSandboxExtensionHandle:(long long)arg1;
- (bool)shouldIssueSandboxExtensionWhenEncoding;

@end
