
@interface SFClipLink : NSObject {
    NSString * _actionCaption;
    NSString * _actionTitle;
    NSString * _appName;
    NSString * _bundleIdentifier;
    NSString * _clipName;
    UIImage * _icon;
    bool  _siteRequestsShowCard;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *actionCaption;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *clipName;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) bool siteRequestsShowCard;
@property (nonatomic, copy) NSURL *url;

+ (double)iconHeight;
+ (id)localizedCaptionForClipNamed:(id)arg1 action:(long long)arg2;
+ (id)localizedUppercaseStringForAction:(long long)arg1;

- (void).cxx_destruct;
- (id)actionCaption;
- (id)actionTitle;
- (id)appName;
- (id)bundleIdentifier;
- (id)clipName;
- (void)getClipAttributesWithCompletionHandler:(id /* block */)arg1;
- (id)icon;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 actionTitle:(id)arg3;
- (void)setActionCaption:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClipName:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setSiteRequestsShowCard:(bool)arg1;
- (void)setUrl:(id)arg1;
- (bool)siteRequestsShowCard;
- (id)url;

@end
