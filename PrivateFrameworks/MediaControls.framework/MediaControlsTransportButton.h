
@interface MediaControlsTransportButton : MPButton {
    double  _cursorScale;
    MPCPlayerCommandRequest * _holdBeginCommandRequest;
    MPCPlayerCommandRequest * _holdEndCommandRequest;
    NSString * _identifier;
    bool  _performingHighlightAnimation;
    bool  _shouldPresentActionSheet;
    MPCPlayerCommandRequest * _touchUpInsideCommandRequest;
}

@property (nonatomic) double cursorScale;
@property (nonatomic, retain) MPCPlayerCommandRequest *holdBeginCommandRequest;
@property (nonatomic, retain) MPCPlayerCommandRequest *holdEndCommandRequest;
@property (nonatomic, retain) NSString *identifier;
@property (getter=isPerformingHighlightAnimation, nonatomic, readonly) bool performingHighlightAnimation;
@property (nonatomic) bool shouldPresentActionSheet;
@property (nonatomic, retain) MPCPlayerCommandRequest *touchUpInsideCommandRequest;

- (void).cxx_destruct;
- (double)cursorScale;
- (id)holdBeginCommandRequest;
- (id)holdEndCommandRequest;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPerformingHighlightAnimation;
- (void)setCursorScale:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHoldBeginCommandRequest:(id)arg1;
- (void)setHoldEndCommandRequest:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setShouldPresentActionSheet:(bool)arg1;
- (void)setTouchUpInsideCommandRequest:(id)arg1;
- (bool)shouldPresentActionSheet;
- (id)touchUpInsideCommandRequest;

@end
