
@interface ICNASamplingController : NSObject {
    bool  _shouldTrackSyncHealth;
}

@property (nonatomic, readonly) bool shouldTrackSyncHealth;

+ (id)sharedController;

- (id)init;
- (bool)shouldTrackSyncHealth;

@end
