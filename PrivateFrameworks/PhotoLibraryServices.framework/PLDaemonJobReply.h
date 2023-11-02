
@interface PLDaemonJobReply : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _xpcReply;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcReply;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReply:(id)arg1;
- (id)xpcReply;

@end
