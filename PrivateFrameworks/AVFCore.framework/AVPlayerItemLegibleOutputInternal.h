
@interface AVPlayerItemLegibleOutputInternal : NSObject {
    double  advanceInterval;
    AVWeakReferencingDelegateStorage * delegateStorage;
    <AVPlayerItemLegibleOutputDependencyFactory> * dependencyFactory;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    NSArray * nativeRepresentationSubtypes;
    bool  suppressesPlayerRendering;
    NSString * textStylingResolution;
    AVWeakReference * weakReferenceToHost;
}

@end
