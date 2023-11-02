
@interface MCMXPCMessageRepairUserData : MCMXPCMessageBase <MCMParametersRepairUserData> {
    char * _sandboxToken;
    NSURL * _url;
}

@property (nonatomic, readonly) char *sandboxToken;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)disposition;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (char *)sandboxToken;
- (id)url;

@end
