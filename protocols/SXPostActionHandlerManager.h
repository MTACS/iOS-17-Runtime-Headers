
@protocol SXPostActionHandlerManager <NSObject, SXPostActionHandler>

@required

- (void)addPostActionHandler:(id <SXPostActionHandler>)arg1 forActionType:(NSString *)arg2;
- (void)removePostActionHandler:(id <SXPostActionHandler>)arg1 forActionType:(NSString *)arg2;

@end
