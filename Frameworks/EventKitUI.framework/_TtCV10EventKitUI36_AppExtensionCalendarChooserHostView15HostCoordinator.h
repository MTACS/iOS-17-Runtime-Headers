
@interface _TtCV10EventKitUI36_AppExtensionCalendarChooserHostView15HostCoordinator : NSObject <EKCalendarChooserViewHostInterface, _EXHostViewControllerDelegate> {
    void configurationChangedPublisherSink;
    void conn;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identity;
    void parent;
}

- (void).cxx_destruct;
- (void)calendarSelectionChanged:(id)arg1 constraintsDictionary:(id)arg2 allSelected:(bool)arg3;
- (void)hostViewControllerDidActivate:(id)arg1;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (id)init;
- (void)requestPresentViewWithName:(id)arg1 viewID:(id)arg2 presentationStyle:(long long)arg3;

@end
