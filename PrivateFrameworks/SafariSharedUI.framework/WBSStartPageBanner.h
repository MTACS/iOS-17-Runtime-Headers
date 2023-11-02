
@interface WBSStartPageBanner : NSObject {
    id /* block */  _action;
    long long  _contentVariant;
    id /* block */  _dismissHandler;
    UIImage * _image;
    NSString * _message;
    long long  _numberOfTrackers;
    bool  _privateBrowsingEnabled;
    id /* block */  _privateBrowsingExplanationDismissHandler;
    NSArray * _privateBrowsingExplanationItems;
    long long  _privateBrowsingExplanationState;
    NSString * _title;
    long long  _userInterfaceStyle;
}

@property (nonatomic, readonly, copy) id /* block */ action;
@property (nonatomic, readonly) long long contentVariant;
@property (nonatomic, readonly, copy) id /* block */ dismissHandler;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly) long long numberOfTrackers;
@property (getter=isPrivateBrowsingEnabled, nonatomic, readonly) bool privateBrowsingEnabled;
@property (nonatomic, copy) id /* block */ privateBrowsingExplanationDismissHandler;
@property (nonatomic, readonly, copy) NSArray *privateBrowsingExplanationItems;
@property (nonatomic, readonly) long long privateBrowsingExplanationState;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) long long userInterfaceStyle;

+ (id)bannerWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 interactive:(bool)arg4 dismissHandler:(id /* block */)arg5;
+ (id)bannerWithTitle:(id)arg1 message:(id)arg2 dismissHandler:(id /* block */)arg3;
+ (id)privacyReportBannerWithNumberOfTrackers:(long long)arg1 privateBrowsingEnabled:(bool)arg2 selectionHandler:(id /* block */)arg3;
+ (id)privateBrowsingExplanationBannerWithState:(long long)arg1 explanationItems:(id)arg2 dismissHandler:(id /* block */)arg3;
+ (id)privateBrowsingPersistentModule;
+ (id)privateRelayPromptBannerWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 dismissHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)action;
- (long long)contentVariant;
- (id)description;
- (id /* block */)dismissHandler;
- (unsigned long long)hash;
- (id)image;
- (id)initWithContentVariant:(long long)arg1 action:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateBrowsingEnabled;
- (id)message;
- (long long)numberOfTrackers;
- (id /* block */)privateBrowsingExplanationDismissHandler;
- (id)privateBrowsingExplanationItems;
- (long long)privateBrowsingExplanationState;
- (void)setPrivateBrowsingExplanationDismissHandler:(id /* block */)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (id)title;
- (long long)userInterfaceStyle;

@end
