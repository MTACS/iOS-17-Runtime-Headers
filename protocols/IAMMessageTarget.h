
@protocol IAMMessageTarget <NSObject>

@required

- (void)messageCoordinator:(IAMMessageCoordinator *)arg1 didUpdatePriorityMessage:(IAMMessage *)arg2 forTarget:(NSString *)arg3;
- (NSString *)targetIdentifier;

@optional

- (bool)shouldBeNotifiedOfNilPriorityMessageAfterRegistration;

@end
