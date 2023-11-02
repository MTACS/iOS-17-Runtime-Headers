
@protocol ACC2SVControllerDelegate <NSObject>

@required

- (void)twoSVController:(id <ACC2SVControllerProtocol>)arg1 openMyAppleConnectForRealm:(NSString *)arg2;
- (void)twoSVController:(void *)arg1 prepareUIWithCompletion:(void *)arg2; // needs 2 arg types, found 6: <ACC2SVControllerProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)twoSVControllerEnterCredentials:(id <ACC2SVControllerProtocol>)arg1;
- (void)twoSVControllerWillClose:(id <ACC2SVControllerProtocol>)arg1;

@optional

- (NSString *)twoSVController:(id <ACC2SVControllerProtocol>)arg1 myAppleConnectURLForRealm:(NSString *)arg2;

@end
