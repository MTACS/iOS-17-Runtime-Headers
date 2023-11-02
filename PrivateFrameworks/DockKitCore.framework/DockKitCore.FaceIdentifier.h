
@interface DockKitCore.FaceIdentifier : NSObject {
    void canceller;
    void faceID;
    void finalPrintRectSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void maxImageHeight;
    void maxImageWidth;
    void maxTrainingCount;
    void model;
    void trainingCount;
    void trainingQueue;
}

- (void).cxx_destruct;
- (id)init;

@end
