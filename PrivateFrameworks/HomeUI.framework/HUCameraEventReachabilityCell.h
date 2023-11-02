
@interface HUCameraEventReachabilityCell : UICollectionViewCell {
    CALayer * _badgeLayer;
    unsigned long long  _displayMode;
    bool  _needsFullDashedLineWidth;
    HFCameraScrubberReachabilityEventContainer * _reachabilityEvent;
}

@property (nonatomic, retain) CALayer *badgeLayer;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) bool needsFullDashedLineWidth;
@property (nonatomic, retain) HFCameraScrubberReachabilityEventContainer *reachabilityEvent;

+ (id)backgroundColor;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)badgeLayer;
- (unsigned long long)displayMode;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsFullDashedLineWidth;
- (id)reachabilityEvent;
- (void)setBadgeLayer:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setNeedsFullDashedLineWidth:(bool)arg1;
- (void)setReachabilityEvent:(id)arg1;
- (void)updateWithReachabilityEventContainer:(id)arg1 mode:(unsigned long long)arg2;

@end
