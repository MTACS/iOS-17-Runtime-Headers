
@interface CFPDContainerSource : CFPDSource {
    struct __CFString { } * _containerPath;
}

- (struct __CFString { }*)container;
- (void)dealloc;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 container:(struct __CFString { }*)arg3 byHost:(bool)arg4 managed:(bool)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;

@end
