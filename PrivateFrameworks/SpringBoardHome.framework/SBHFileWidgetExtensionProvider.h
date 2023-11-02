
@interface SBHFileWidgetExtensionProvider : SBHRecentsDocumentExtensionProvider {
    bool  _widgetHasTransparentBackground;
}

@property (nonatomic) bool widgetHasTransparentBackground;

- (bool)_extensionHasTransparencyEntitlement:(id)arg1;
- (id)_preferredExtensionIdentifier;
- (void)_setupHostViewController:(id)arg1;
- (id)filesWidgetViewControllerWithConfiguration:(id)arg1;
- (id)init;
- (bool)recentsDocumentExtensionWrappingViewControllerHasTransparentContent:(id)arg1;
- (void)setWidgetConfiguration:(id)arg1;
- (void)setWidgetHasTransparentBackground:(bool)arg1;
- (bool)widgetHasTransparentBackground;

@end
