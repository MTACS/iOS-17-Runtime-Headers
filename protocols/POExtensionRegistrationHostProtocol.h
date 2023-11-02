
@protocol POExtensionRegistrationHostProtocol <NSObject>

@required

- (void)beginDeviceRegistrationUsingOptions:(void *)arg1 extensionData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)beginUserRegistrationUsingUserName:(void *)arg1 authenticationMethod:(void *)arg2 options:(void *)arg3 extensionData:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, int, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@optional

- (void)canPerformRegistrationCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)protocolVersionCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)registrationDidCancelWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)registrationDidCompleteWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)supportedGrantTypesCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
