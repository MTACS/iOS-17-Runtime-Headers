
@interface HKMedicalIDEditorLanguageCell : HKMedicalIDEditorCell {
    id /* block */  _editAction;
}

@property (nonatomic, copy) id /* block */ editAction;

- (void).cxx_destruct;
- (void)beginEditing;
- (id /* block */)editAction;
- (void)setBeginEditAction:(id /* block */)arg1;
- (void)setEditAction:(id /* block */)arg1;
- (void)setValueLanguageText:(id)arg1;

@end
