
@protocol GKExtensionHostProtocol <NSObject>

@required

- (void)messageFromExtension:(NSData *)arg1;

@optional

- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;

@end
