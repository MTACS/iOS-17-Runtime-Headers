
@interface BWStillImageFocusPixelBlurScoreResult : NSObject {
    float  _score;
    int  _status;
}

@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) int status;

- (id)initWithStatus:(int)arg1 score:(float)arg2;
- (float)score;
- (int)status;

@end
