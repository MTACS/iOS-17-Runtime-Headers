
@interface PUEditMenu : NSObject

+ (void)_autoCropAsset:(id)arg1;
+ (bool)_canRemoveEditsFromAsset:(id)arg1;
+ (void)_enhanceAsset:(id)arg1;
+ (void)_performEdit:(id)arg1 name:(id)arg2 undoManager:(id)arg3 edit:(id /* block */)arg4;
+ (void)_removeEditsOnAsset:(id)arg1;
+ (void)_removeEnhanceFromAsset:(id)arg1;
+ (void)_rotateAssetClockwise:(id)arg1;
+ (id)editMenuActionsForAsset:(id)arg1 undoManager:(id)arg2 presentViewController:(id /* block */)arg3;

@end
