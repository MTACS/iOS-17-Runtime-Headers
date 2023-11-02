
@protocol NCNotificationActionRunner <NSObject>

@required

- (void)executeAction:(void *)arg1 fromOrigin:(void *)arg2 endpoint:(void *)arg3 withParameters:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NCNotificationAction *, NSString *, BSServiceConnectionEndpoint *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setShouldForwardAction:(bool)arg1;
- (bool)shouldForwardAction;

@end
