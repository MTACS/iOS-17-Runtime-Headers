
@interface MCMXPCMessageCrashTest : MCMXPCMessageBase <MCMParametersCrashTest> {
    unsigned long long  _crashCount;
}

@property (nonatomic, readonly) unsigned long long crashCount;

- (unsigned long long)crashCount;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;

@end
