
@interface CCUISensorAttributionSensorButton : UIButton {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedExpandedRect;
    UILabel * _descriptionLabel;
    UIView * _indicatorView;
    CCUISensorActivityData * _sensorActivityData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedExpandedRect;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, retain) UIView *indicatorView;
@property (nonatomic, readonly) CCUISensorActivityData *sensorActivityData;
@property (nonatomic, readonly) UIView *sensorIconView;
@property (nonatomic, readonly) unsigned long long sensorType;

- (void).cxx_destruct;
- (void)_enableUserInteractionForLargeContentViewerIfNeeded;
- (id)_fontForTitleLabel;
- (double)_indicatorWidth;
- (void)_layoutDescriptionLabel;
- (void)_layoutIndicatorView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedExpandedRect;
- (id)descriptionLabel;
- (void)didMoveToWindow;
- (id)indicatorView;
- (id)initWithSensorActivityData:(id)arg1;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (bool)scalesLargeContentImage;
- (id)sensorActivityData;
- (id)sensorIconView;
- (unsigned long long)sensorType;
- (void)setCachedExpandedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndicatorView:(id)arg1;
- (bool)showsLargeContentViewer;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
