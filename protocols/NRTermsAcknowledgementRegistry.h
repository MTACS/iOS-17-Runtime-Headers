
@protocol NRTermsAcknowledgementRegistry <NSObject>

@required

- (void)add:(void *)arg1 forDeviceID:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NRTermsEvent *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)checkForAcknowledgement:(void *)arg1 forDeviceID:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NRTermsEvent *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
