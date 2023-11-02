
@interface RBSDextProcessIdentity : RBSProcessIdentity {
    NSString * _bundleID;
    NSString * _label;
    NSString * _serverName;
    unsigned char  _type;
}

- (void).cxx_destruct;
- (id)_initDextWithServerName:(id)arg1 label:(id)arg2 containingAppBundleID:(id)arg3;
- (id)_initDextWithServerName:(id)arg1 tagString:(id)arg2 containingAppBundleID:(id)arg3;
- (bool)_matchesIdentity:(id)arg1;
- (id)copyWithAuid:(unsigned int)arg1;
- (id)debugDescription;
- (id)dextContainingAppBundleID;
- (id)dextLabel;
- (id)dextServerName;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithDecodeFromJob:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isAnonymous;
- (bool)isDext;

@end
