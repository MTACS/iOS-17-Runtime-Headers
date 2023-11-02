
@interface _DKSyncedFeatures : NSObject {
    bool  _isDigitalHealthDisabledInitialized;
    bool  _isDigitalHealthDisabledPreviousResult;
    bool  _isSingleDevice;
    long long  _screenTimeSyncState;
}

- (id)description;
- (id)init;

@end
