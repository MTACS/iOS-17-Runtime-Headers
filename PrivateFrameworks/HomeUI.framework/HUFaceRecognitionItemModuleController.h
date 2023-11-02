
@interface HUFaceRecognitionItemModuleController : HUItemModuleController

- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg1 animated:(bool)arg2;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(bool)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
