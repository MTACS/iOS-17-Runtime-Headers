
@interface CLSNotificationBannerDisplayManager : NSObject {
    NSDate * _lastBannerTime;
}

@property (nonatomic, retain) NSDate *lastBannerTime;

+ (id)shared;

- (void).cxx_destruct;
- (id)lastBannerTime;
- (void)setLastBannerTime:(id)arg1;
- (void)showBannerWithTitle:(id)arg1 message:(id)arg2;
- (void)showPrivacyModalViewWithInfo:(id)arg1;

@end
