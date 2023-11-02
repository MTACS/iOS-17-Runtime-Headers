
@interface CXAnswerCallAction : CXCallAction {
    NSDate * _dateConnected;
    bool  _downgradeToAudio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
    bool  _pauseVideoToStart;
    bool  _screening;
}

@property (nonatomic, copy) NSDate *dateConnected;
@property (nonatomic) bool downgradeToAudio;
@property (nonatomic) bool pauseVideoToStart;
@property (nonatomic) bool screening;

+ (bool)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (id)customDescription;
- (id)dateConnected;
- (bool)downgradeToAudio;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithDateConnected:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (bool)pauseVideoToStart;
- (bool)screening;
- (void)setDateConnected:(id)arg1;
- (void)setDowngradeToAudio:(bool)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setPauseVideoToStart:(bool)arg1;
- (void)setScreening:(bool)arg1;
- (void)updateAsFulfilledWithDateConnected:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
