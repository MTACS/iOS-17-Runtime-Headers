
@interface HoverTextServices.HoverTextServiceAXUIService : NSObject <AXUIClientDelegate> {
    void _client;
    void hoverTextEnabled;
}

- (void).cxx_destruct;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(long long)arg2;

@end
