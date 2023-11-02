
@interface VGSelectionState : NSObject {
    bool  _completed;
    bool  _failed;
    float  _progress;
}

@property (nonatomic) bool completed;
@property (nonatomic) bool failed;
@property (nonatomic) float progress;

+ (id)capturedStatesFromCapturedPoses:(id)arg1;

- (bool)completed;
- (bool)failed;
- (float)progress;
- (void)setCompleted:(bool)arg1;
- (void)setFailed:(bool)arg1;
- (void)setProgress:(float)arg1;

@end
