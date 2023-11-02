
@interface _NSTextAttachmentLayoutContext : NSObject <NSTextViewportElementProvider> {
    bool  _allowsFontOverridingTextAttachmentVerticalMetrics;
    long long  _applicationFrameworkContext;
    <NSTextLocation> * _baseLocation;
    <_NSTextLayoutAttachmentLayoutContextDelegate> * _delegate;
    bool  _hasResolvedAttachmentFrame;
    bool  _hasViewProvider;
    NSArray * _sortedKeys;
    NSMapTable * _textAttachmentInfoTable;
    NSArray * _textAttachmentViewProviders;
    NSTextContainer * _textContainer;
    NSTextLayoutFragment * _textLayoutFragment;
    bool  _usesFontLeading;
}

@property bool allowsFontOverridingTextAttachmentVerticalMetrics;
@property long long applicationFrameworkContext;
@property (readonly) <NSTextLocation> *baseLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <_NSTextLayoutAttachmentLayoutContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool hasResolvedAttachmentFrame;
@property bool hasViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *textAttachmentViewProviders;
@property NSTextContainer *textContainer;
@property NSTextLayoutFragment *textLayoutFragment;
@property bool usesFontLeading;

- (void)_adjustLocations;
- (void)_flushCachedInfo;
- (id)_sortedKeys;
- (bool)allowsFontOverridingTextAttachmentVerticalMetrics;
- (long long)applicationFrameworkContext;
- (id)baseLocation;
- (void)dealloc;
- (id)delegate;
- (void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (bool)hasResolvedAttachmentFrame;
- (bool)hasViewProvider;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })proposedLineFragmentRectForLocation:(id)arg1 attributes:(id)arg2 baselineOffset:(out double*)arg3;
- (void)reset;
- (void)setAllowsFontOverridingTextAttachmentVerticalMetrics:(bool)arg1;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setHasResolvedAttachmentFrame:(bool)arg1;
- (void)setHasViewProvider:(bool)arg1;
- (void)setTextContainer:(id)arg1;
- (void)setTextLayoutFragment:(id)arg1;
- (void)setUsesFontLeading:(bool)arg1;
- (id)textAttachmentLayoutInfoForLocation:(id)arg1 attributes:(id)arg2;
- (id)textAttachmentViewProviders;
- (id)textContainer;
- (id)textContainerForLocation:(id)arg1;
- (id)textLayoutFragment;
- (bool)usesFontLeading;

@end
