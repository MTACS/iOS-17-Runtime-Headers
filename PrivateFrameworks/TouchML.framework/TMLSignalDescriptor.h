
@interface TMLSignalDescriptor : TMLMethodDescriptor

@property (nonatomic, readonly) NSString *signalName;

- (id)initWithName:(id)arg1 parameters:(id)arg2;
- (id)initWithName:(id)arg1 returnType:(unsigned long long)arg2 parameters:(id)arg3 methodSelector:(id)arg4 attributes:(id)arg5;
- (id)signalName;

@end