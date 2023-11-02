
@interface CKSettingsMeCardSharingNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider> {
    NSData * _imageData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)generateAvatarImageOfSize:(struct CGSize { double x1; double x2; })arg1 imageHandler:(id /* block */)arg2;
- (id)imageData;
- (id)initWithImageData:(id)arg1;

@end
