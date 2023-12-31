
@interface VUIPlaybackReporterSession : NSObject {
    NSString * _UUID;
    id  _context;
    NSMutableDictionary * _metadata;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _metadataLock;
    NSObject<TVPPlayback> * _player;
    bool  _reportingEnabled;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, retain) id context;
@property (nonatomic) NSObject<TVPPlayback> *player;
@property (nonatomic) bool reportingEnabled;

+ (id)transitionReasonForMediaControllerStartReason:(id)arg1 autoStart:(id)arg2;
+ (id)transitionReasonForMediaControllerStopReason:(id)arg1 autoStop:(id)arg2;
+ (id)transitionTypeForMediaControllerAutoTransition:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)consumeMetadataForKey:(id)arg1;
- (id)consumeStartReason;
- (id)consumeStartType;
- (id)consumeStopReason;
- (id)consumeStopType;
- (id)context;
- (id)description;
- (id)initWithPlayer:(id)arg1 context:(id)arg2;
- (id)metadataForKey:(id)arg1;
- (id)player;
- (bool)reportingEnabled;
- (void)setContext:(id)arg1;
- (void)setMetadata:(id)arg1 forKey:(id)arg2;
- (void)setPlayer:(id)arg1;
- (void)setReportingEnabled:(bool)arg1;

@end
