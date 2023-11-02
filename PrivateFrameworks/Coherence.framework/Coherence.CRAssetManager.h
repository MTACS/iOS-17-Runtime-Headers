
@interface Coherence.CRAssetManager : _TtCs12_SwiftObject {
    void addAssetTasks;
    void assetActor;
    void encryptionDelegate;
    void filePresenterURLsOnBackground;
    void filePresentersQueue;
    void isInBackground;
    void name;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  temporaryDirectory;
    void watchedDirectories;
}

- (void)didEnterBackground;
- (void)willEnterForeground;

@end
