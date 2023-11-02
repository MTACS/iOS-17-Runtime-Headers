
@interface UITextFormattingViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  __allowContentToScroll;
    double  __bottomInset;
    bool  __hasPopoverPresentation;
    bool  __includeDefaultFont;
    bool  __preferringDimmingVisible;
    bool  __presentationSourceIsInputAssistantItem;
    bool  __shouldDeferColorPickerPresentationToHost;
    bool  __shouldDeferFontPickerPresentationToHost;
    bool  __useLandscapeLayout;
}

@property (nonatomic) bool _allowContentToScroll;
@property (setter=_setBottomInset:, nonatomic) double _bottomInset;
@property (setter=_setHasPopoverPresentation:, nonatomic) bool _hasPopoverPresentation;
@property (nonatomic) bool _includeDefaultFont;
@property (nonatomic) bool _preferringDimmingVisible;
@property (setter=_setPresentationSourceIsInputAssistantItem:, nonatomic) bool _presentationSourceIsInputAssistantItem;
@property (setter=_setShouldDeferColorPickerPresentationToHost:, nonatomic) bool _shouldDeferColorPickerPresentationToHost;
@property (setter=_setShouldDeferFontPickerPresentationToHost:, nonatomic) bool _shouldDeferFontPickerPresentationToHost;
@property (setter=_setUseLandscapeLayout:, nonatomic) bool _useLandscapeLayout;

+ (bool)supportsSecureCoding;

- (bool)_allowContentToScroll;
- (double)_bottomInset;
- (bool)_hasPopoverPresentation;
- (bool)_includeDefaultFont;
- (bool)_preferringDimmingVisible;
- (bool)_presentationSourceIsInputAssistantItem;
- (void)_setBottomInset:(double)arg1;
- (void)_setHasPopoverPresentation:(bool)arg1;
- (void)_setPresentationSourceIsInputAssistantItem:(bool)arg1;
- (void)_setShouldDeferColorPickerPresentationToHost:(bool)arg1;
- (void)_setShouldDeferFontPickerPresentationToHost:(bool)arg1;
- (void)_setUseLandscapeLayout:(bool)arg1;
- (bool)_shouldDeferColorPickerPresentationToHost;
- (bool)_shouldDeferFontPickerPresentationToHost;
- (bool)_useLandscapeLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)set_allowContentToScroll:(bool)arg1;
- (void)set_includeDefaultFont:(bool)arg1;
- (void)set_preferringDimmingVisible:(bool)arg1;

@end
