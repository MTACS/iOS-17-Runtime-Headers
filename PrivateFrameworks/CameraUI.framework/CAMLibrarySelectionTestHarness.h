
@interface CAMLibrarySelectionTestHarness : CAMPerformanceTestHarness {
    CAMLibrarySelectionController * _librarySelectionController;
}

@property (nonatomic, readonly) CAMLibrarySelectionController *librarySelectionController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTestName:(id)arg1;
- (id)initWithTestName:(id)arg1 librarySelectionController:(id)arg2;
- (id)librarySelectionController;
- (void)startTesting;

@end
