
@interface NTKCPhotosAddController : NSObject <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UINavigationControllerDelegate> {
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedInstance;
+ (id)pickerConfigurationWithLimit:(unsigned long long)arg1;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 configuration:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 selectionLimit:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)presentSinglePhotoAddControllerFromViewController:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
