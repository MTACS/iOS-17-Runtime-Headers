
@interface ICStateHandler : NSObject

+ (void)addStateHandlerWithName:(const char *)arg1 stateBlock:(id /* block */)arg2;
+ (void)addStateHandlerWithName:(const char *)arg1 sysdiagnoseOnly:(bool)arg2 stateBlock:(id /* block */)arg3;

@end
