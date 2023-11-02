
@interface CAMAnalyticsSharedLibraryModeEvent : CAMAnalyticsEvent {
    CAMLibrarySelectionController * _librarySelectionController;
}

- (void).cxx_destruct;
- (id)eventName;
- (id)initWithLibrarySelectionController:(id)arg1;
- (void)publish;

@end
