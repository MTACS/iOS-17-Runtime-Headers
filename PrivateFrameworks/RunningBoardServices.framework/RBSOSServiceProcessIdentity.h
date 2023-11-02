
@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString * _jobLabel;
    unsigned char  _type;
}

- (void).cxx_destruct;
- (id)_initAngelWithJobLabel:(id)arg1;
- (id)_initDaemonWithJobLabel:(id)arg1 pid:(int)arg2 auid:(unsigned int)arg3;
- (id)_initServiceWithJobLabel:(id)arg1 pid:(int)arg2 auid:(unsigned int)arg3 type:(unsigned char)arg4;
- (id)_initUnknownOSServiceWithJobLabel:(id)arg1;
- (bool)_matchesIdentity:(id)arg1;
- (id)angelJobLabel;
- (id)consistentLaunchdJobLabel;
- (id)copyWithAuid:(unsigned int)arg1;
- (id)daemonJobLabel;
- (id)debugDescription;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (bool)hasConsistentLaunchdJob;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isAngel;
- (bool)isAnonymous;
- (bool)isDaemon;
- (unsigned char)osServiceType;
- (void)setOsServiceType:(unsigned char)arg1;
- (bool)supportsLaunchingDirectly;
- (bool)treatedAsAnAppByFrontBoard:(id*)arg1;

@end
