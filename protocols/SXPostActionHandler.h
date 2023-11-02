
@protocol SXPostActionHandler <NSObject>

@required

- (void)handledAction:(id <SXAction>)arg1 state:(unsigned long long)arg2;

@end
