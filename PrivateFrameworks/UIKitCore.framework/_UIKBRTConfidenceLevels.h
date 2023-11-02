
@interface _UIKBRTConfidenceLevels : NSObject {
    float  _restConfidence;
    float  _touchConfidence;
}

@property (nonatomic) float restConfidence;
@property (nonatomic) float touchConfidence;

- (float)restConfidence;
- (void)setRestConfidence:(float)arg1;
- (void)setTouchConfidence:(float)arg1;
- (float)touchConfidence;

@end
