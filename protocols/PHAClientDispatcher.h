
@protocol PHAClientDispatcher

@required

- (<PHAServiceOperationHandling> *)targetForInvocation:(NSInvocation *)arg1 shouldBackgroundActivities:(bool*)arg2;

@end
