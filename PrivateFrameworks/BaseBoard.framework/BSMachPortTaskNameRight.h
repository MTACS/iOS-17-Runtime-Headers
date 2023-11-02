
@interface BSMachPortTaskNameRight : BSMachPortSendRight {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSAuditToken * _lock_auditToken;
    int  _pid;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (nonatomic, readonly) int pid;

+ (bool)supportsSecureCoding;
+ (id)taskNameForPID:(int)arg1;

- (void).cxx_destruct;
- (id)auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (int)pid;

@end
