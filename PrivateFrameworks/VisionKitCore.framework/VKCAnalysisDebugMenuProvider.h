
@interface VKCAnalysisDebugMenuProvider : NSObject <UIContextMenuInteractionDelegate> {
    UIContextMenuInteraction * _contextMenuInteraction;
    <VKAnalysisDebugInfoProvider> * _provider;
}

@property (nonatomic, retain) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <VKAnalysisDebugInfoProvider> *provider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)menuFromElements:(id)arg1 title:(id)arg2;
- (id)menuFromProvider:(id)arg1;
- (void)presentDebugMenuProvider:(id)arg1 fromView:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)provider;
- (void)setContextMenuInteraction:(id)arg1;
- (void)setProvider:(id)arg1;

@end
