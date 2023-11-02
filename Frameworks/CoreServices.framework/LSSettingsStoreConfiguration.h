
@interface LSSettingsStoreConfiguration : NSObject <NSSecureCoding> {
    NSXPCListenerEndpoint * _endpoint;
}

@property (readonly) NSXPCListenerEndpoint *endpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;

@end
