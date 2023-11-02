
@interface ktrace.Recording : _TtCs12_SwiftObject {
    void endReason;
    void endWaitGroup;
    void kdebugPostprocessing;
    void kernelDisableWaiter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  options;
    void outputPath;
    void plan;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  planPath;
    void recording;
    void reporter;
    void session;
    void subclassBitmap;
    void toolName;
    void waitComplete;
    void waitQueue;
}

@end
