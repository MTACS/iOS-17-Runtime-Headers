
@interface PRUISPosterAppearanceObservingAttachmentProvider : NSObject {
    UIView * _obscurableContentContainerView;
    BSUIVibrancyEffectView * _obscurableContentVibrancyView;
    UIView * _overlayContentView;
    PRSServerPosterPath * _path;
    PRPosterTitleStyleConfiguration * _titleStyleConfiguration;
}

@property (nonatomic, readonly) PRUISPosterAttachment *obscurableContentAttachment;
@property (nonatomic, retain) BSUIVibrancyView *obscurableContentVibrancyView;
@property (nonatomic, readonly) UIView *obscurableContentView;
@property (nonatomic, readonly) PRUISPosterAttachment *overlayContentAttachment;
@property (nonatomic, readonly) UIView *overlayContentView;
@property (nonatomic, readonly) UIView *vibrantObscurableContentView;

+ (long long)obscurableContentAttachmentLevel;
+ (long long)overlayContentAttachmentLevel;

- (void).cxx_destruct;
- (void)_loadTitleStyleConfigurationIfNeeded;
- (void)_updateVibrancyConfigurationWithTitleStyleConfiguration:(id)arg1;
- (void)applyPosterAppearanceToObserver:(id)arg1;
- (id)initWithPRSConfiguration:(id)arg1;
- (id)initWithPoster:(id)arg1;
- (id)obscurableContentAttachment;
- (id)obscurableContentVibrancyView;
- (id)obscurableContentView;
- (id)overlayContentAttachment;
- (id)overlayContentView;
- (void)setObscurableContentVibrancyView:(id)arg1;
- (id)vibrantObscurableContentView;

@end
