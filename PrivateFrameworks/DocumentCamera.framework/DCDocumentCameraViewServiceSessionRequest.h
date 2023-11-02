
@interface DCDocumentCameraViewServiceSessionRequest : NSObject <NSSecureCoding> {
    NSString * _appName;
    DCSandboxExtension * _cachesDirectorySandboxExtension;
}

@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) DCSandboxExtension *cachesDirectorySandboxExtension;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appName;
- (id)cachesDirectorySandboxExtension;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
