
@interface DAAppContext : NSObject <CUXPCCodable, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSObject<OS_xpc_object> * _xpcEndpoint;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setXpcEndpoint:(id)arg1;
- (id)xpcEndpoint;

@end
