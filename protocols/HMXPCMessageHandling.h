
@protocol HMXPCMessageHandling <NSObject>

@required

- (void)handleMessage:(HMFMessage *)arg1;
- (void)handleMessage:(void *)arg1 responseHandler:(void *)arg2; // needs 2 arg types, found 8: HMFMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*

@end
