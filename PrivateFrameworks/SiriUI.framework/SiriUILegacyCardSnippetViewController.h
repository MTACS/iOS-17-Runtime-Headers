
@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController <SiriUISizeClassConfiguring> {
    SAUISnippet * _snippet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_backingSnippetViewController;
- (id)_legacyCardSectionViewController;
- (void)_setVirgin:(bool)arg1;
- (id)attributedSubtitle;
- (bool)cardViewController:(id)arg1 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)arg2;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)configureContentWithSizeClass:(long long)arg1;
- (void)endEditingAndCorrect:(bool)arg1;
- (id)headerPunchOut;
- (id)initWithSnippet:(id)arg1;
- (bool)isCancelled;
- (bool)isConfirmed;
- (bool)isFullPadWidth;
- (id)navigationTitle;
- (bool)removedAfterDialogProgresses;
- (id)requestContext;
- (id)sashItem;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderPunchOut:(id)arg1;
- (void)setIsFullPadWidth:(bool)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setSnippet:(id)arg1;
- (void)setSnippetPunchOut:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setWantsConfirmationInsets:(bool)arg1;
- (void)siriDidDeactivate;
- (void)siriDidLayoutSnippetView;
- (void)siriWillLayoutSnippetView;
- (id)snippet;
- (id)snippetPunchOut;
- (id)subtitle;
- (Class)transparentHeaderViewClass;
- (bool)usePlatterStyle;
- (bool)wantsConfirmationInsets;
- (bool)wantsToManageBackgroundColor;
- (void)wasAddedToTranscript;
- (void)willCancel;
- (void)willConfirm;

@end
