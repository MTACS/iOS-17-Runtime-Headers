
@interface AVTSimpleAvatarPickerSwiftProvider : NSObject <AVTAvatarPicker, AVTAvatarPickerDelegate, AVTObjectViewController, AVTPresenterDelegate> {
    AVTSimpleAvatarPicker * _avatarPicker;
    AVTAvatarStore * _avatarStore;
    <NSObject> * _avatarStoreChangeObserver;
    <AVTSimpleAvatarPickerSwiftProviderDelegate> * _delegate;
    AVTUIEnvironment * _environment;
    AVTUILogger * _logger;
    NSString * _presentedIdentifier;
    <AVTAvatarPickerDelegate> * avatarPickerDelegate;
    <AVTPresenterDelegate> * presenterDelegate;
    UIView * view;
}

@property (nonatomic, readonly) AVTSimpleAvatarPicker *avatarPicker;
@property (nonatomic) <AVTAvatarPickerDelegate> *avatarPickerDelegate;
@property (nonatomic, readonly) AVTAvatarStore *avatarStore;
@property (nonatomic, retain) <NSObject> *avatarStoreChangeObserver;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTSimpleAvatarPickerSwiftProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVTUILogger *logger;
@property (nonatomic, retain) NSString *presentedIdentifier;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_notifyStoreChanged;
- (id)avatarPicker;
- (void)avatarPicker:(id)arg1 didSelectAvatarRecord:(id)arg2;
- (id)avatarPickerDelegate;
- (void)avatarPickerDidEndCameraSession:(id)arg1;
- (id)avatarPickerView;
- (void)avatarPickerWillStartCameraSession:(id)arg1;
- (id)avatarStore;
- (id)avatarStoreChangeObserver;
- (void)beginObservingAvatarStoreChanges;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (id)delegate;
- (void)dismissAvatarUIControllerAnimated:(bool)arg1;
- (void)endObservingAvatarStoreChanges;
- (id)environment;
- (id)initWithDelegate:(id)arg1 allowAddItem:(bool)arg2 allowEditing:(bool)arg3 interItemSpacing:(double)arg4;
- (id)logger;
- (void)presentActionsForSelectedAvatar;
- (void)presentAvatarUIController:(id)arg1 animated:(bool)arg2;
- (void)presentedAvatarRecord:(id)arg1;
- (id)presentedIdentifier;
- (id)presenterDelegate;
- (void)recentStickersDidChange:(id)arg1;
- (void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)setAvatarPickerDelegate:(id)arg1;
- (void)setAvatarStoreChangeObserver:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentedIdentifier:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)updatePickerSelectionWithAnimation:(bool)arg1;
- (void)updatePresentedRecordWithIdentifier:(id)arg1 animated:(bool)arg2;
- (void)updatePresentedRecordWithRecord:(id)arg1 animated:(bool)arg2;
- (id)view;

@end
