
@interface AMPUserNotificationContentViewController : UIViewController {
    NSString * _audioSessionCategory;
    unsigned long long  _audioSessionCategoryOptions;
    <AMPUserNotificationContentDelegate> * _delegate;
    bool  _hasAppeared;
    bool  _hasPlayedVideo;
    UIImageView * _imageView;
    AMSMetrics * _metrics;
    UILabel * _textLabel;
    UILabel * _titleLabel;
    AMSUserNotification * _userNotification;
    AVPlayerViewController * _videoPlayerController;
}

@property (nonatomic, retain) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions;
@property (nonatomic) <AMPUserNotificationContentDelegate> *delegate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expectedContentSize;
@property (nonatomic) bool hasAppeared;
@property (nonatomic) bool hasPlayedVideo;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) AMSMetrics *metrics;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) AMSUserNotification *userNotification;
@property (nonatomic, readonly) AVPlayerViewController *videoPlayerController;

- (void).cxx_destruct;
- (id)audioSessionCategory;
- (unsigned long long)audioSessionCategoryOptions;
- (id)delegate;
- (struct CGSize { double x1; double x2; })expectedContentSize;
- (bool)hasAppeared;
- (bool)hasPlayedVideo;
- (id)imageView;
- (void)imageViewTapped:(id)arg1;
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
- (void)setMetrics:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)textLabel;
- (id)titleLabel;
- (id)userNotification;
- (id)videoPlayerController;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
