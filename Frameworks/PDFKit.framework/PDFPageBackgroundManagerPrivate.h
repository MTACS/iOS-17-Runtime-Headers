
@interface PDFPageBackgroundManagerPrivate : NSObject {
    unsigned long long  activePageIndex;
    NSMutableDictionary * backgroundImageCache;
    <PDFPageBackgroundManagerDelegate> * documentDelegate;
    bool  isCancled;
    bool  isWorking;
    PDFRenderingProperties * renderingProperties;
    bool  willForceUpdate;
    NSObject<OS_dispatch_queue> * workQueue;
}

- (void).cxx_destruct;

@end
