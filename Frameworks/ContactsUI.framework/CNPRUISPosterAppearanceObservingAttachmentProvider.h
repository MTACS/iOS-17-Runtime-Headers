
@interface CNPRUISPosterAppearanceObservingAttachmentProvider : NSObject {
    PRUISPosterAppearanceObservingAttachmentProvider * _wrappedProvider;
}

@property (nonatomic, readonly) CNPRUISPosterAttachment *obscurableContentAttachment;
@property (nonatomic, readonly) UIView *obscurableContentView;
@property (nonatomic, readonly) CNPRUISPosterAttachment *overlayContentAttachment;
@property (nonatomic, readonly) UIView *overlayContentView;
@property (nonatomic, readonly) UIView *vibrantObscurableContentView;
@property (nonatomic, readonly) PRUISPosterAppearanceObservingAttachmentProvider *wrappedProvider;

- (void).cxx_destruct;
- (void)applyPosterAppearanceToObserver:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)obscurableContentAttachment;
- (id)obscurableContentView;
- (id)overlayContentAttachment;
- (id)overlayContentView;
- (id)vibrantObscurableContentView;
- (id)wrappedProvider;

@end
