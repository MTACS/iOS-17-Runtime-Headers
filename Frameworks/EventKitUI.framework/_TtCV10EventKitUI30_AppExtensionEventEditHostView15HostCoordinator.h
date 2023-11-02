
@interface _TtCV10EventKitUI30_AppExtensionEventEditHostView15HostCoordinator : NSObject <EKEventEditViewHostInterface, _EXHostViewControllerDelegate> {
    void configurationChangedPublisherSink;
    void conn;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identity;
    void parent;
}

- (void).cxx_destruct;
- (void)didCompleteWithAction:(long long)arg1 oldToNewObjectIDMap:(id)arg2 waitUntilTimestamp:(id)arg3 serializedDictionary:(id)arg4 objectIDToChangeSetDictionaryMap:(id)arg5 objectIDToPersistentDictionaryMap:(id)arg6 eventConstraints:(id)arg7;
- (void)hostViewControllerDidActivate:(id)arg1;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (id)init;
- (void)requestPresentViewWithName:(id)arg1 viewID:(id)arg2 presentationStyle:(long long)arg3;

@end
