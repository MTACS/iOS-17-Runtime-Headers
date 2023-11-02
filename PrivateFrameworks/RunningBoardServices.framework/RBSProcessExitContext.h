
@interface RBSProcessExitContext : NSObject <NSSecureCoding, RBSXPCSecureCoding> {
    int  _legacyCode;
    RBSProcessExitStatus * _status;
    RBSTerminateContext * _terminationContext;
    NSDate * _timestamp;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int legacyCode;
@property (nonatomic, readonly) RBSProcessExitStatus *status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) RBSTerminateContext *terminationContext;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) long long type;

+ (id)exitContextForNamespace:(unsigned int)arg1 code:(unsigned long long)arg2 wait4Status:(int)arg3;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithStatus:(id)arg1;
- (id)copyWithTerminationContext:(id)arg1;
- (id)copyWithTimestamp:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)legacyCode;
- (id)status;
- (id)terminationContext;
- (id)timestamp;
- (long long)type;

@end
