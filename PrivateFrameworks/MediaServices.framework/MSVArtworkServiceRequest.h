
@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding> {
    NSMutableDictionary * _sandboxExtensions;
    NSMutableArray * _sandboxHandles;
}

@property (nonatomic, readonly) Class operationClass;
@property (nonatomic, readonly) long long operationPriority;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSandboxExtensionIfNeededForURL:(id)arg1;
- (void)consumeSandboxExtensions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (Class)operationClass;
- (long long)operationPriority;
- (void)releaseSandboxExtensions;

@end
