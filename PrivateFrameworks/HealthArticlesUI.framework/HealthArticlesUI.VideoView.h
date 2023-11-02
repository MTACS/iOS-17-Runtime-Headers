
@interface HealthArticlesUI.VideoView : UIView {
    void $__lazy_storage_$_captionLabel;
    void accessibilityVideoDescription;
    void playMode;
    void playWhenVisible;
    void playerLooper;
    void primaryPlayerAsset;
    void primaryPlayerItem;
    void videoPlayer;
}

@property (nonatomic, copy) NSString *accessibilityVideoDescription;

- (void).cxx_destruct;
- (id)accessibilityVideoDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)nonLoopingEndOfPlay:(id)arg1;
- (void)setAccessibilityVideoDescription:(id)arg1;

@end
