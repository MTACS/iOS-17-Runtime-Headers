
@protocol COMeshControllerQueuedElementProtocol <NSObject, NSCopying>

@required

- (COMeshCommand *)command;
- (COMeshNode *)destination;
- (void)invokeCallbackWithError:(NSError *)arg1;

@end
