
@interface HUCameraSettingsModuleController : HUItemModuleController <UITextViewDelegate> {
    bool  _useProxSetupPresentationStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useProxSetupPresentationStyle;

- (bool)canSelectDisabledItem:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setUseProxSetupPresentationStyle:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;
- (bool)useProxSetupPresentationStyle;
- (void)viewSizeDidChanged;

@end
