
@interface AVAssetReaderOutputInternal : NSObject {
    bool  alwaysCopiesSampleData;
    bool  currentConfigurationIsFinal;
    NSArray * currentTimeRanges;
    bool  disablesMultithreadedAndAsyncVideoDecompression;
    bool  extractionCompleteForCurrentConfiguration;
    int  extractionID;
    struct OpaqueFigAssetReader { } * figAssetReader;
    int  finished;
    bool  maximizePowerEfficiency;
    AVRunLoopCondition * sampleBufferAvailabilityCondition;
    bool  supportsRandomAccess;
    AVWeakReference * weakReference;
    AVWeakReference * weakReferenceToAssetReader;
}

@end
