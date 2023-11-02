
@interface NEProcessIdentity : NSObject <NSSecureCoding> {
    NSData * _auditTokenData;
    int  _pid;
    int  _pidVersion;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSData *auditTokenData;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) int pidVersion;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auditTokenData;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromXPCConnection:(id)arg1;
- (id)initFromXPCMessage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)pid;
- (int)pidVersion;
- (id)uuid;

@end
