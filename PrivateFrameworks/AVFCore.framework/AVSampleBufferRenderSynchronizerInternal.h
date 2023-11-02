
@interface AVSampleBufferRenderSynchronizerInternal : NSObject {
    NSMutableDictionary * STSLabelSinks;
    struct OpaqueFigSampleBufferRenderSynchronizer { } * figSynchronizer;
    NSObject<OS_dispatch_queue> * figSynchronizerAccessQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  mostRecentlySetTime;
    float  rate;
    NSObject<OS_dispatch_queue> * rateQueue;
    struct OpaqueCMTimebase { } * readOnlyTimebase;
    NSObject<OS_dispatch_queue> * rendererListQueue;
    AVSampleBufferVideoRenderer * rendererTrackedBySTS;
    NSMutableArray * renderers;
    NSMutableArray * timedRenderRemovals;
    AVWeakReference * weakObserver;
}

@end
