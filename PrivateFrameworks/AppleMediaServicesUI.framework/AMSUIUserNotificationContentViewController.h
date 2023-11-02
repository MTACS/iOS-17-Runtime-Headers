
@interface AMSUIUserNotificationContentViewController : UIViewController <UIGestureRecognizerDelegate> {
    NSString * _audioSessionCategory;
    unsigned long long  _audioSessionCategoryOptions;
    <AMSUIUserNotificationContentDelegate> * _delegate;
    bool  _hasAppeared;
    bool  _hasPlayedVideo;
    UIImageView * _imageView;
    AMSMetrics * _metrics;
    UILabel * _subtitleLabel;
    UILabel * _textLabel;
    UILabel * _titleLabel;
    AMSUserNotification * _userNotification;
    AVPlayerViewController * _videoPlayerController;
}

@property (nonatomic, retain) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIUserNotificationContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expectedContentSize;
@property (nonatomic) bool hasAppeared;
@property (nonatomic) bool hasPlayedVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) AMSMetrics *metrics;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) AMSUserNotification *userNotification;
@property (nonatomic, readonly) AVPlayerViewController *videoPlayerController;

- (void).cxx_destruct;
- (id)audioSessionCategory;
- (unsigned long long)audioSessionCategoryOptions;
- (void)dealloc;
- (id)delegate;
- (struct CGSize { double x1; double x2; })expectedContentSize;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasAppeared;
- (bool)hasPlayedVideo;
- (id)imageView;
- (id)initWithNotification:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (void)mediaPause;
- (id)metrics;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAudioSessionCategory:(id)arg1;
- (void)setAudioSessionCategoryOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasAppeared:(bool)arg1;
- (void)setHasPlayedVideo:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)textLabel;
- (id)titleLabel;
- (id)userNotification;
- (id)videoPlayerController;
- (void)viewTapped:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
