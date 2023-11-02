
@interface TeaUI.DownloadButton : TeaUI.TouchInsetsButton {
    void buttonState;
    void dataProvider;
    void delegate;
    void downloadProgressDisposable;
    void downloadStateDisposable;
    void downloadingImage;
    void handler;
    void imageTintColor;
    void notDownloadingImage;
    void progressBackgroundLayer;
    void progressLayer;
    void progressTintColor;
    void trackTintColor;
}

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)startingButtonTappedWithSender:(id)arg1;
- (void)tintColorDidChange;

@end
