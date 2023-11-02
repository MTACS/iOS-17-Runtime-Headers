
@interface SeymourUI.SessionRoutePickerPresenter : NSObject <MPAVRoutingControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentSelection;
    void discoveredParticipants;
    void display;
    void eventHub;
    void passwordController;
    void remoteParticipantClient;
    void sessionClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionOrigin;
    void subscriptionToken;
    void systemOutputControlDeviceDiscovery;
    void systemRoutingController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  targetSelection;
}

- (void).cxx_destruct;
- (id)init;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;

@end
