
@interface SXInteractionContextManager : NSObject <SXInteractionContextManager, UIContextMenuInteractionDelegate, UIToolTipInteractionDelegate> {
    UITargetedPreview * _activePreview;
    <SXInteractionContextProviding> * _activeProvider;
    NSMutableArray * _providers;
    SXViewport * _viewport;
    <SXInteractionContextManagerDelegate> * delegate;
}

@property (nonatomic, retain) UITargetedPreview *activePreview;
@property (nonatomic, retain) <SXInteractionContextProviding> *activeProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXInteractionContextManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *providers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)activePreview;
- (id)activeProvider;
- (void)addProvider:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2;
- (id)delegate;
- (void)didEndPreviewing;
- (id)initWithViewport:(id)arg1;
- (id)providers;
- (void)registerOnView:(id)arg1;
- (void)setActivePreview:(id)arg1;
- (void)setActiveProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldStartPreviewing;
- (id)toolTipInteraction:(id)arg1 configurationAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)viewport;
- (void)willStartPreviewing;

@end
