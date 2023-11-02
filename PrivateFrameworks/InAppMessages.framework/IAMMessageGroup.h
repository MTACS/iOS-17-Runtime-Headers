
@interface IAMMessageGroup : NSObject {
    NSString * _groupIdentifier;
    <IAMMessageGroupInternalDelegate> * _internalDelegate;
    IAMMessageCoordinator * _messageCoordinator;
}

@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic) <IAMMessageGroupInternalDelegate> *internalDelegate;
@property (nonatomic) IAMMessageCoordinator *messageCoordinator;

- (void).cxx_destruct;
- (id)contextPropertyWithName:(id)arg1;
- (id)groupIdentifier;
- (id)initWithGroupIdentifier:(id)arg1;
- (id)internalDelegate;
- (id)messageCoordinator;
- (void)performModalMessagePresentation:(id)arg1 fromViewController:(id)arg2;
- (void)receiveEvent:(id)arg1;
- (void)reportContextPropertiesDidChange:(id)arg1;
- (void)reportModalMessagePresentationFailedWithIdentifier:(id)arg1;
- (void)reportModalMessageWasDismissedWithIdentifier:(id)arg1;
- (void)reportModalMessageWasPresentedWithIdentifier:(id)arg1;
- (void)reportModalMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2;
- (void)setInternalDelegate:(id)arg1;
- (void)setMessageCoordinator:(id)arg1;
- (bool)shouldPerformModalMessagePresentation;
- (void)viewControllerForModalMessagePresentation:(id)arg1 completion:(id /* block */)arg2;

@end
