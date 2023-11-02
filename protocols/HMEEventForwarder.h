
@protocol HMEEventForwarder

@required

- (void)forwardEvent:(void *)arg1 topic:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMEEvent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
