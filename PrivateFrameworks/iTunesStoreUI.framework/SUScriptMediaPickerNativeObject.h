
@interface SUScriptMediaPickerNativeObject : SUScriptViewControllerNativeObject <MPMediaPickerControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)destroyNativeObject;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)setupNativeObject;

@end
