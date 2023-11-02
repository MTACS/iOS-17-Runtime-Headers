
@interface MicaPlayer : NSObject <NSCopying> {
    <MicaPlayerDelegate> * _delegate;
    double  _documentDuration;
    bool  _loopDuringPlayback;
    NSString * _path;
    NSTimer * _playTimer;
    float  _preferredPlaybackSpeed;
    NSDictionary * _publishedObjects;
    double  _retinaScale;
    CALayer * _rootLayer;
}

@property (nonatomic) <MicaPlayerDelegate> *delegate;
@property (nonatomic) double documentDuration;
@property (nonatomic, readonly) bool isPlaybackAtEnd;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic) bool loopDuringPlayback;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSTimer *playTimer;
@property (nonatomic) double playbackTime;
@property (nonatomic) float preferredPlaybackSpeed;
@property (nonatomic, retain) NSDictionary *publishedObjects;
@property (nonatomic) double retinaScale;
@property (nonatomic, retain) CALayer *rootLayer;

+ (bool)boolFromDictionary:(id)arg1 key:(id)arg2 defaultValue:(bool)arg3;
+ (id)rootDictForPath:(id)arg1;
+ (id)updatePublishedObjects:(id)arg1 toReferenceLayersInTree:(id)arg2 ratherThanLayersInTree:(id)arg3;

- (void).cxx_destruct;
- (void)addToLayer:(id)arg1 onTop:(bool)arg2 gravity:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (double)documentDuration;
- (id)initWithFileName:(id)arg1 retinaScale:(double)arg2;
- (id)initWithPath:(id)arg1 retinaScale:(double)arg2;
- (id)initWithPath:(id)arg1 retinaScale:(double)arg2 rootLayer:(id)arg3 publishedObjects:(id)arg4;
- (bool)isPlaybackAtEnd;
- (bool)isPlaying;
- (bool)isTimerNeeded;
- (bool)loopDuringPlayback;
- (void)moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 animate:(bool)arg3;
- (void)notifyDelegateDidChangePlaybackTime;
- (void)notifyDelegateDidStartPlaying;
- (void)notifyDelegateDidStopPlaying;
- (id)path;
- (void)pause;
- (void)play;
- (id)playTimer;
- (double)playbackTime;
- (float)preferredPlaybackSpeed;
- (id)publishedLayerWithKey:(id)arg1 required:(bool)arg2;
- (id)publishedObjectWithKey:(id)arg1 required:(bool)arg2;
- (id)publishedObjects;
- (void)removeFromSuperlayer;
- (double)retinaScale;
- (id)rootLayer;
- (void)runPlayTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentDuration:(double)arg1;
- (void)setLoopDuringPlayback:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)setPlayTimer:(id)arg1;
- (void)setPlaybackTime:(double)arg1;
- (void)setPreferredPlaybackSpeed:(float)arg1;
- (void)setPublishedObjects:(id)arg1;
- (void)setRetinaScale:(double)arg1;
- (void)setRootLayer:(id)arg1;
- (void)startPlayTimerIfNeeded;
- (void)stopPlayTimer;

@end
