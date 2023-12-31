
@interface AFXPCWrapper : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _xpcObject;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)xpcObject;

@end
