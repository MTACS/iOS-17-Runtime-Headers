
@interface EventKitTCCUIFactory : NSObject {
    NSArray * _allCalendars;
    EKEventStore * _eventStore;
    _TtC13EventKitTCCUI19EventPreviewWrapper * _previewWrapper;
}

- (void).cxx_destruct;
- (int)countEventsInTheNextYear;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)previewTableView;
- (id)previewViewController;
- (id)settingsPreviewViewController;
- (id)settingsViewSubtitle;

@end
