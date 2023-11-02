
@interface PBUIPosterWallpaperMigrationInfo : NSObject {
    BOOL  _homeProvider;
    BOOL  _lockProvider;
    BOOL  _pairingType;
}

@property (nonatomic, readonly) BOOL homeProvider;
@property (nonatomic, readonly) BOOL lockProvider;
@property (nonatomic, readonly) BOOL pairingType;

- (id)_initWithPairingType:(BOOL)arg1 lockProvider:(BOOL)arg2 homeProvider:(BOOL)arg3;
- (id)description;
- (BOOL)homeProvider;
- (BOOL)lockProvider;
- (BOOL)pairingType;

@end
