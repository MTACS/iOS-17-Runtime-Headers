
@interface PXPhotoKitAssetCollectionShowPersonInfoActionPerformer : PXPhotoKitAssetCollectionActionPerformer <CNContactPickerDelegate> {
    CNContactViewController * _pushedContactViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CNContactViewController *pushedContactViewController;
@property (readonly) Class superclass;

+ (void)_createPersonInfoActionForPerson:(id)arg1 traitCollection:(id)arg2 handler:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (long long)actionTypeForPerson:(id)arg1 outContact:(id*)arg2;
+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createStandardActionForAssetCollectionReference:(id)arg1 withInput:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_handleUnlinkContactButton:(id)arg1;
- (void)_performUserInteractionTaskWithType:(long long)arg1 contact:(id)arg2;
- (void)_popContactViewController;
- (void)_showContactDetailViewControllerForContact:(id)arg1;
- (void)_showContactPicker;
- (void)_showNamingBootstrap;
- (void)_unlinkContact;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)performUserInteractionTask;
- (id)pushedContactViewController;
- (void)setPushedContactViewController:(id)arg1;

@end
