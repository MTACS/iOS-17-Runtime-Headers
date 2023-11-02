
@protocol CMContinuityCaptureTransportMessaging <NSObject>

@required

- (void)enqueueResponse:(NSDictionary *)arg1 identifier:(NSString *)arg2;
- (void)sendMessage:(void *)arg1 message:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
