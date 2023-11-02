
@interface TUIButtonBarAppearanceDelegate : NSObject <_UIButtonBarAppearanceDelegate> {
    TUISystemInputAssistantView * _systemInputAssistantView;
}

@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (nonatomic, readonly) double backButtonMargin;
@property (nonatomic, readonly) double backButtonMaximumWidth;
@property (nonatomic, readonly) long long barType;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool centerTextButtons;
@property (nonatomic, readonly) bool compactMetrics;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultEdgeSpacing;
@property (nonatomic, readonly) double defaultTextPadding;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) TUISystemInputAssistantView *systemInputAssistantView;
@property (nonatomic, readonly) UIColor *tintColor;

- (void).cxx_destruct;
- (id)imageSymbolConfiguration;
- (id)initWithSystemInputAssistantView:(id)arg1;
- (void)setSystemInputAssistantView:(id)arg1;
- (id)systemInputAssistantView;
- (id)tintColor;

@end
