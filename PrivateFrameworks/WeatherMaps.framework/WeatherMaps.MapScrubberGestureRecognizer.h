
@interface WeatherMaps.MapScrubberGestureRecognizer : UIGestureRecognizer {
    void feedbackGenerator;
    void lastTranslation;
    void location;
}

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
