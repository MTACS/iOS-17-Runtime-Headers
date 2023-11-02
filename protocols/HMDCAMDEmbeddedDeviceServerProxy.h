
@protocol HMDCAMDEmbeddedDeviceServerProxy

@required

- (void)_performCommandFromClass:(void *)arg1 method:(void *)arg2 arguments:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)_testCommunication:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
