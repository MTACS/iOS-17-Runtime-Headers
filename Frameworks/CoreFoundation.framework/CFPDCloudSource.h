
@interface CFPDCloudSource : CFPDContainerSource {
    struct __CFString { } * _configurationPath;
    SYDRemotePreferencesSource * cloudSource;
}

- (struct __CFString { }*)cloudConfigurationPath;
- (id)copyPropertyListValidatingPlist:(bool)arg1;
- (struct __CFString { }*)debugDump;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 storeName:(id)arg3 configurationPath:(struct __CFString { }*)arg4 containerPath:(struct __CFString { }*)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;
- (void)processEndOfMessageIntendingToRemoveSource:(bool*)arg1 replacingWithTombstone:(id*)arg2;
- (void)synchronizeWithCloud:(id)arg1 replyHandler:(id /* block */)arg2;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(bool)arg4 containerPath:(const char *)arg5 fileUID:(unsigned int)arg6 mode:(unsigned short)arg7 diagnosticMessage:(const char **)arg8;

@end
