
@interface CNPhotoPickerViewController : CNVisualIdentityPickerViewController {
    CNMutableContact * _pendingEditContact;
    <CNPhotoPickerViewControllerDelegate> * delegate;
}

@property (nonatomic, retain) NSString *assignActionTitleOverride;
@property (nonatomic) <CNPhotoPickerViewControllerDelegate> *delegate;
@property (nonatomic, retain) CNMutableContact *pendingEditContact;

+ (bool)canShowAvatarEditor;
+ (id)log;
+ (id)navigationControllerForPicker:(id)arg1;
+ (id)photoPickerForGameCenterWithContact:(id)arg1;

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (id)contactViewCache;
- (id)delegate;
- (void)done:(id)arg1;
- (id)initWithContact:(id)arg1 style:(id)arg2 configuration:(id)arg3;
- (id)pendingEditContact;
- (void)photoView:(id)arg1 didAcceptDropOfImageData:(id)arg2;
- (void)photoViewDidUpdate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingEditContact:(id)arg1;
- (void)updateHeaderViewAvatar;
- (void)updatePendingEditContact;
- (id)viewControllerForPhotoView:(id)arg1;

@end
