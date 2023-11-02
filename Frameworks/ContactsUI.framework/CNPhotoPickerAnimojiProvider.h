
@interface CNPhotoPickerAnimojiProvider : NSObject <CNPhotoPickerProvider> {
    <AVTAvatarStore> * _avatarStore;
    NSString * identifier;
}

@property (nonatomic, readonly) <AVTAvatarStore> *avatarStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;

+ (id)providerItemForAvatarRecord:(id)arg1;
+ (id)providerItemForAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4;

- (void).cxx_destruct;
- (id)avatarStore;
- (bool)canCreateMemoji;
- (id)identifier;
- (id)initWithVisualIdentity:(id)arg1;
- (id)initWithVisualIdentity:(id)arg1 avatarStore:(id)arg2;
- (id)loadItemsForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 RTL:(bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (void)setIdentifier:(id)arg1;

@end
