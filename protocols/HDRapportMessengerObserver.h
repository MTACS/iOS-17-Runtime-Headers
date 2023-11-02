
@protocol HDRapportMessengerObserver <NSObject>

@required

- (void)rapportMessenger:(void *)arg1 didReceiveRequest:(void *)arg2 data:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 10: HDRapportMessenger *, HDRapportRequestIdentifier *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
