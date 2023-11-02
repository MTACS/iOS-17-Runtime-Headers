
@interface SiriPrivateLearningAnalytics.FlatFileStreamBookmarkStore : _TtCs12_SwiftObject {
    void bookmarkFileLock;
    void bookmarks;
    void dispatchGroup;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  filePath;
    void lock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lockPath;
    void queue;
    void writeSequenceNumber;
    void writeSequenceNumberLog;
}

@end
