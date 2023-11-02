
@interface CBDigitizerHotspot : NSObject {
    float  _center_X;
    float  _center_Y;
    int  _orientation;
    float  _touchReleaseTime;
    float  _touchTriggerDelay;
    long long  _triggered;
}

@property float center_X;
@property float center_Y;
@property int orientation;
@property float touchReleaseTime;
@property float touchTriggerDelay;
@property long long triggered;

- (float)center_X;
- (float)center_Y;
- (id)description;
- (id)init;
- (bool)isClearedAt:(float)arg1;
- (int)orientation;
- (void)setCenter_X:(float)arg1;
- (void)setCenter_Y:(float)arg1;
- (void)setOrientation:(int)arg1;
- (void)setTouchReleaseTime:(float)arg1;
- (void)setTouchTriggerDelay:(float)arg1;
- (void)setTriggered:(long long)arg1;
- (float)touchReleaseTime;
- (float)touchTriggerDelay;
- (long long)triggered;

@end
