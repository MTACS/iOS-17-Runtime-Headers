
@interface RBSProcessExitEvent : NSObject <RBSXPCSecureCoding> {
    RBSProcessExitContext * _context;
    RBSProcessHandle * _process;
}

@property (nonatomic, retain) RBSProcessExitContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RBSProcessHandle *process;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)process;
- (void)setContext:(id)arg1;
- (void)setProcess:(id)arg1;

@end
