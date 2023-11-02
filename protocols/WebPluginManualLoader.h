
@protocol WebPluginManualLoader

@required

- (void)pluginView:(WAKView *)arg1 receivedData:(NSData *)arg2;
- (void)pluginView:(WAKView *)arg1 receivedError:(NSError *)arg2;
- (void)pluginView:(WAKView *)arg1 receivedResponse:(NSURLResponse *)arg2;
- (void)pluginViewFinishedLoading:(WAKView *)arg1;

@end
