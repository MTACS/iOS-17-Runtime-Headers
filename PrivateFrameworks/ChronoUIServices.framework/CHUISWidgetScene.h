
@interface CHUISWidgetScene : UIWindowScene

@property (nonatomic, readonly, copy) NSString *additionalSnapshotPresentationContext;
@property (getter=areAnimationsPaused, nonatomic, readonly) bool animationsPaused;
@property (nonatomic, readonly) bool canAppearInSecureEnvironment;
@property (nonatomic, readonly) unsigned long long clipBehavior;
@property (nonatomic, readonly) unsigned long long colorScheme;
@property (getter=isContentPaused, nonatomic, readonly) bool contentPaused;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, copy) CHSInlineTextParameters *inlineTextParameters;
@property (getter=isInteractionDisabled, nonatomic, readonly) bool interactionDisabled;
@property (nonatomic, readonly, copy) CHSWidgetMetrics *metrics;
@property (nonatomic, readonly) CHSWidget *nullableWidget;
@property (nonatomic, readonly) bool prefersUnredactedContentInLowLuminanceEnvironment;
@property (nonatomic, readonly, copy) NSString *remoteViewControllerClassName;
@property (nonatomic, readonly) CHSWidgetRenderScheme *renderScheme;
@property (nonatomic, readonly) bool showsWidgetLabel;
@property (nonatomic, readonly) bool supportsLowLuminance;
@property (nonatomic, readonly, copy) CHSWidgetTintParameters *tintParameters;
@property (nonatomic, readonly, copy) CHUISWidgetVisibilitySettings *visibility;
@property (getter=shouldVisibleEntrySnapshot, nonatomic, readonly) bool visibleEntryShouldSnapshot;
@property (nonatomic, readonly, copy) CHSWidget *widget;
@property (nonatomic, readonly, copy) NSString *widgetConfigurationIdentifier;
@property (nonatomic, readonly, copy) NSString *widgetHostIdentifier;
@property (nonatomic, readonly) unsigned long long widgetPriority;

- (id)_sceneSettings;
- (id)additionalSnapshotPresentationContext;
- (bool)areAnimationsPaused;
- (bool)canAppearInSecureEnvironment;
- (unsigned long long)clipBehavior;
- (unsigned long long)colorScheme;
- (unsigned long long)contentType;
- (id)inlineTextParameters;
- (bool)isContentPaused;
- (bool)isInteractionDisabled;
- (id)metrics;
- (id)nullableWidget;
- (bool)prefersUnredactedContentInLowLuminanceEnvironment;
- (id)remoteViewControllerClassName;
- (id)renderScheme;
- (bool)shouldVisibleEntrySnapshot;
- (bool)showsWidgetLabel;
- (bool)supportsLowLuminance;
- (id)tintParameters;
- (id)visibility;
- (id)widget;
- (id)widgetConfigurationIdentifier;
- (id)widgetHostIdentifier;
- (unsigned long long)widgetPriority;

@end
