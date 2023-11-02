
@interface RBSLaunchRequest : RBSRequest <NSCopying, RBSXPCSecureCoding> {
    RBSLaunchContext * _context;
}

@property (nonatomic, readonly) RBSLaunchContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (bool)execute:(out id*)arg1;
- (bool)execute:(out id*)arg1 assertion:(out id*)arg2 error:(out id*)arg3;
- (bool)execute:(out id*)arg1 error:(out id*)arg2;
- (void)executeWithCallback:(id /* block */)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
