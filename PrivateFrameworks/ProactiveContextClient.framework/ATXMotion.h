
@interface ATXMotion : NSObject {
    bool  _canPredictClipsGivenRecentMotion;
    long long  _motiontype;
    bool  _stationary;
}

@property (nonatomic, readonly) bool canPredictClipsGivenRecentMotion;
@property (nonatomic, readonly) long long motiontype;
@property (nonatomic, readonly) bool stationary;

+ (id)_getMotionStringFromCMMotionActivity:(id)arg1;
+ (long long)_getMotionTypeFromCMMotionActivity:(id)arg1;
+ (bool)canPredictClipsForActivityStream:(id)arg1;
+ (id)findMostCommonAndRecent:(id)arg1 identityFunc:(id /* block */)arg2;
+ (id)getMotionStringFromMotionType:(long long)arg1;
+ (id)summarizeActivityStream:(id)arg1;

- (bool)canPredictClipsGivenRecentMotion;
- (id)getMotionString;
- (id)initFromCMMotionActivity:(id)arg1;
- (id)initFromCMMotionActivity:(id)arg1 canPredictClipsGivenRecentMotion:(bool)arg2;
- (id)initWithMotionType:(long long)arg1 stationary:(bool)arg2 canPredictClipsGivenRecentMotion:(bool)arg3;
- (long long)motiontype;
- (id)print;
- (bool)stationary;

@end
