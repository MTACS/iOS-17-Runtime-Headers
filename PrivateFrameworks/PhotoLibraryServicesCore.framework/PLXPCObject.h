
@interface PLXPCObject : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _object;
}

@property (readonly) NSObject<OS_xpc_object> *object;

+ (bool)supportsSecureCoding;
+ (struct _xpc_type_s { }*)type;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)object;

@end
