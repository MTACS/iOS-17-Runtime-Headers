
@interface SearchUICollectionPeekDelegate : NSObject <UIContextMenuInteractionDelegate> {
    SearchUICollectionViewController * _collectionViewController;
    SearchUICommandHandler * _commandHandler;
}

@property (nonatomic) SearchUICollectionViewController *collectionViewController;
@property (nonatomic, retain) SearchUICommandHandler *commandHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)menuConfigurationForCommandHandler:(id)arg1;

- (void).cxx_destruct;
- (id)collectionViewController;
- (id)commandHandler;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)generateTargetPreviewForInteraction:(id)arg1 forItemWithIdentifier:(id)arg2;
- (id)initWithViewController:(id)arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)setCommandHandler:(id)arg1;

@end
