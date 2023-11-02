
@interface RBSEndowmentLink : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSString * _endowmentNamespace;
    NSString * _sourceEnvironment;
    int  _sourcePid;
    NSString * _targetEnvironment;
    int  _targetPid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *endowmentNamespace;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sourceEnvironment;
@property (nonatomic, readonly) int sourcePid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *targetEnvironment;
@property (nonatomic, readonly) int targetPid;

+ (id)endowmentLinkForNamespace:(id)arg1 sourceEnvironment:(id)arg2 sourcePid:(int)arg3 targetEnvironment:(id)arg4 targetPid:(int)arg5;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)endowmentNamespace;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sourceEnvironment;
- (int)sourcePid;
- (id)targetEnvironment;
- (int)targetPid;

@end
