
@interface RBSProcessIdentifier : NSObject <NSCopying, NSSecureCoding, RBSProcessIdentifier, RBSXPCSecureCoding> {
    NSString * _description;
    int  _pid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;

+ (id)identifierForCurrentProcess;
+ (id)identifierForIdentifier:(id)arg1;
+ (id)identifierWithPid:(int)arg1;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPid:(int)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (int)pid;
- (id)processPredicate;
- (int)rbs_pid;

@end
