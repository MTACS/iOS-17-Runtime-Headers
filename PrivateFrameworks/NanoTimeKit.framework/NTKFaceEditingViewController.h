
@interface NTKFaceEditingViewController : UIViewController {
    NTKFaceEditView * _editView;
    NTKFace * _face;
}

@property (nonatomic, readonly) long long currentEditMode;
@property (nonatomic, readonly) NTKFace *face;

- (void).cxx_destruct;
- (void)activate;
- (long long)currentEditMode;
- (void)deactivateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)face;
- (void)faceColorEditOptionsChanged;
- (id)initWithFace:(id)arg1;
- (void)loadView;
- (void)willActivate;
- (void)willDeactivate;

@end
