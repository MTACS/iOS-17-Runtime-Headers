
@interface ASDJobOptions : NSObject <NSSecureCoding> {
    NSXPCConnection * _endpoint;
    ASDJobManifest * _manifest;
}

@property (nonatomic, retain) NSXPCConnection *endpoint;
@property (nonatomic, retain) ASDJobManifest *manifest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)manifest;
- (void)setEndpoint:(id)arg1;
- (void)setManifest:(id)arg1;

@end
