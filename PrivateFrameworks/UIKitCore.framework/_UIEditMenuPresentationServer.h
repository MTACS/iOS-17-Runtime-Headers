
@interface _UIEditMenuPresentationServer : NSObject <_UIEditMenuPresentationDelegate> {
    NSMutableDictionary * _configurations;
    NSMutableDictionary * _connections;
    NSMutableDictionary * _presentations;
}

@property (nonatomic, retain) NSMutableDictionary *configurations;
@property (nonatomic, retain) NSMutableDictionary *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *presentations;
@property (readonly) Class superclass;

+ (id)sharedPresentationServer;

- (void).cxx_destruct;
- (void)_editMenuPresentation:(id)arg1 didSelectMenuLeaf:(id)arg2 completion:(id /* block */)arg3;
- (void)_editMenuPresentation:(id)arg1 didTransitionMenuForConfiguration:(id)arg2;
- (void)_editMenuPresentation:(id)arg1 preparedMenuForDisplay:(id)arg2 completion:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_editMenuPresentation:(id)arg1 targetRectForConfiguration:(id)arg2;
- (id)_editMenuPresentation:(id)arg1 titleViewForMenu:(id)arg2 configuration:(id)arg3;
- (void)_editMenuPresentation:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)_editMenuPresentation:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)_sendLifecycleEvent:(long long)arg1 forMenuWithIdentifier:(id)arg2;
- (id)configurations;
- (id)connections;
- (void)dismissEditMenuForIdentifier:(id)arg1 hideReason:(long long)arg2;
- (id)init;
- (void)presentEditMenuWithConfiguration:(id)arg1 originContext:(id)arg2 inDisplayDelegate:(id)arg3 forConnection:(id)arg4;
- (id)presentations;
- (void)replaceEditMenuForIdentifier:(id)arg1 updatedMenu:(id)arg2 reason:(long long)arg3;
- (void)setConfigurations:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setPresentations:(id)arg1;
- (void)updateUserInterfaceStyleForMenuWithIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2;

@end
