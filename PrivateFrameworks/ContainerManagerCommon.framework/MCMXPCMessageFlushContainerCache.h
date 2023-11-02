
@interface MCMXPCMessageFlushContainerCache : MCMXPCMessageWithContainerClassBase <MCMParametersFlushContainerCache> {
    bool  _transient;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) bool transient;

- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (bool)transient;

@end
