
@interface CMMagicMountManager : NSObject {
    id  _internal;
    long long  _magicMountConfiguration;
}

@property (nonatomic, readonly) struct CMMagicMountStateStruct { double x1; long long x2; } currentMagicMountState;
@property (nonatomic) long long magicMountConfiguration;

+ (bool)isAvailable;

- (struct CMMagicMountStateStruct { double x1; long long x2; })currentMagicMountState;
- (void)dealloc;
- (void)deallocPrivate;
- (void)feedMountStatus:(long long)arg1 apAwake:(bool)arg2 simulated:(bool)arg3 timestamp:(double)arg4;
- (id)init;
- (id)initPrivate;
- (long long)magicMountConfiguration;
- (void)onMagicMountData:(const struct MagicMountState { double x1; unsigned char x2; bool x3; bool x4; }*)arg1;
- (void)sendMagicMountStateToClientPrivate;
- (void)setAPWakesAllowed:(bool)arg1;
- (void)setAPWakesAllowedPrivate:(bool)arg1;
- (void)setMagicMountConfiguration:(long long)arg1;
- (void)simulateMagicMountEvent:(long long)arg1 delay:(double)arg2;
- (void)startMagicMountUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startMagicMountUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopMagicMountUpdates;
- (void)stopMagicMountUpdatesPrivate;

@end
