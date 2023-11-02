
@interface AVPlayerLayerInternal : NSObject {
    long long  activeMode;
    AVPlayerLayer * associatedRemoteModeLayer;
    NSDictionary * clientLayers;
    FigBaseCALayer * closedCaptionLayer;
    NSObject<OS_dispatch_queue> * configurationQueue;
    AVSinkSubscriber * currentItemNonForcedSubtitlesEnabledSink;
    AVSinkSubscriber * currentItemPresentationSizeSink;
    AVSinkSubscriber * currentItemTracksSink;
    AVKeyPathDependencyManager * dependencyManager;
    bool  honorContentScale;
    AVNetworkPlaybackPerfHUDLayer * hudLayer;
    AVPlayerLayer * interstitialLayer;
    bool  isConnectedToSecondScreen;
    bool  isForScrubbingOnly;
    bool  isLegibleDisplayEnabled;
    bool  isPIPModeEnabled;
    bool  isPartOfForegroundScene;
    bool  isPresentationLayer;
    bool  isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } * isReadyForDisplayMutex;
    bool  isVisible;
    bool  lanczosDownscalingEnabled;
    long long  lanczosDownscalingFactor;
    int  lastWindowSceneEvent;
    struct CGSize { 
        double width; 
        double height; 
    }  latestAppliedPresentationSize;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  legibleContentInsets;
    FigBaseCALayer * maskLayer;
    NSDictionary * pixelBufferAttributes;
    CALayer * placeholderContentLayerDuringPIPMode;
    AVPlayer * player;
    AVPlayer * playerBeingObserved;
    AVSinkSubscriber * playerCurrentItemSink;
    AVSinkSubscriber * playerIsDisplayingClosedCaptionsSink;
    id  playerItemHasEnqueuedVideoFrameListener;
    bool  preventsChangesToSublayerHierarchy;
    double  screenScale;
    NSObject<OS_dispatch_queue> * serialQueue;
    bool  showInterstitialInstead;
    FigSubtitleCALayer * subtitleLayer;
    NSString * videoGravity;
    FigVideoContainerLayer * videoLayer;
    bool  willManageSublayersAsSwappedLayers;
    id  windowSceneDidEnterBackgroundListener;
    id  windowSceneWillEnterForegroundListener;
}

@end
