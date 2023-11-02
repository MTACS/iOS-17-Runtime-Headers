
@interface _UIDismissCurlUpTapGestureRecognizer : UITapGestureRecognizer {
    float  _curlUpDY;
}

@property (setter=_setCurlUpDY:, nonatomic) float _curlUpDY;

- (float)_curlUpDY;
- (void)_setCurlUpDY:(float)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;

@end
