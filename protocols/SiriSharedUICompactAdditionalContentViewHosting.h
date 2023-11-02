
@protocol SiriSharedUICompactAdditionalContentViewHosting <SiriSharedUIStackableContent, SiriSharedUIStackableContentActionOffering>

@required

- (void)animateAppearanceIfNeeded;
- (<SiriSharedUICompactAdditionalContentViewDelegate> *)delegate;
- (SiriSharedUIStandardView<SiriSharedUIStackableContent><SiriSharedUIStackableContentActionOffering> *)hostingView;
- (bool)isInAmbient;
- (void)prepareForUpdatesToSnippetViews:(bool)arg1;
- (void)setDelegate:(id <SiriSharedUICompactAdditionalContentViewDelegate>)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setSnippetViews:(NSArray *)arg1;
- (void)snippetContentDidUpdate;
- (NSArray *)snippetViews;

@end
