
@interface MCMXPCMessageOpenPrimordialDataContainer : MCMXPCMessageBase <MCMParametersOpenPrimordialDataContainer> {
    bool  _useCodeSignDatabase;
}

@property (nonatomic, readonly) bool useCodeSignDatabase;

- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (bool)useCodeSignDatabase;

@end
