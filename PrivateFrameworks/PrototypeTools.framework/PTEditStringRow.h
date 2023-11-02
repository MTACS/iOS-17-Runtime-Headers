
@interface PTEditStringRow : PTSRow

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (bool)supportsSecureCoding;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)_px_configureTextField:(id)arg1 withTextPlaceholder:(id)arg2 saveAction:(id)arg3 forRow:(id)arg4;
+ (id)px_rowWithTitle:(id)arg1 valueKeyPath:(id)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 textPlaceholder:(id)arg5 textValidator:(id /* block */)arg6 condition:(id)arg7;

- (id /* block */)_px_editStringRowTextFieldAction;
- (id /* block */)_px_editStringRowTextValidationAction;
- (void)_px_setEditStringRowTextFieldAction:(id /* block */)arg1;
- (void)_px_setEditStringRowTextValidationAction:(id /* block */)arg1;
- (void)_px_updateSaveActionFromTextField;
- (id)_px_validatedTextFromText:(id)arg1;
- (void)setValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI

- (Class)tableViewCellClass;

@end
