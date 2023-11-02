
@interface ChronoKit.WidgetReaper : NSObject <NSProgressReporting> {
    void candidateURLsToRemove;
    void candidateURLsToRemoveWithProtectedChildren;
    void fileManager;
    void objectWillChange;
    void progress;
    void urlsToProtect;
}

@property (nonatomic, retain) NSProgress *progress;

- (void).cxx_destruct;
- (id)init;
- (id)progress;
- (void)setProgress:(id)arg1;

@end
