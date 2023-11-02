
@interface MRUSpatialAudioPreferences : NSObject {
    bool  _isHeadTrackingEnabled;
    int  _mode;
}

@property (nonatomic, readonly) bool isHeadTrackingEnabled;
@property (nonatomic, readonly) int mode;

- (id)description;
- (id)descriptionForSpatialMode:(int)arg1;
- (id)initWithMode:(int)arg1 headTrackingEnabled:(bool)arg2;
- (bool)isHeadTrackingEnabled;
- (int)mode;

@end
