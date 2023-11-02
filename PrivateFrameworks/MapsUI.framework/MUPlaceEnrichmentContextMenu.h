
@interface MUPlaceEnrichmentContextMenu : UIControl {
    MUPlaceEnrichmentAction * _contextMenuAction;
    <MUPlaceEnrichmentSectionContextMenuDelegate> * _contextMenuDelegate;
    <MUPlaceEnrichmentActionHandler> * _enrichmentActionDelegate;
}

@property (nonatomic, retain) MUPlaceEnrichmentAction *contextMenuAction;
@property (nonatomic) <MUPlaceEnrichmentSectionContextMenuDelegate> *contextMenuDelegate;
@property (nonatomic) <MUPlaceEnrichmentActionHandler> *enrichmentActionDelegate;

- (void).cxx_destruct;
- (id)contextMenuAction;
- (id)contextMenuDelegate;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)enrichmentActionDelegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContextMenuAction:(id)arg1;
- (void)setContextMenuDelegate:(id)arg1;
- (void)setEnrichmentActionDelegate:(id)arg1;

@end
