
@interface CNMeCardSharingContactAvatarProvider : NSObject <CNMeCardSharingAvatarImageDataProvider, CNMeCardSharingAvatarProvider> {
    CNContact * _contact;
    CNAvatarImageRenderer * _renderer;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) CNAvatarImageRenderer *renderer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *thumbnailImageData;
@property (nonatomic, readonly) CNWallpaper *wallpaper;

- (void).cxx_destruct;
- (id)contact;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)generateAvatarImageOfSize:(struct CGSize { double x1; double x2; })arg1 imageHandler:(id /* block */)arg2;
- (void)generatePosterAnimationControllerWithWindowScene:(id)arg1 imageHandler:(id /* block */)arg2;
- (void)generatePosterImageWithWindowScene:(id)arg1 imageHandler:(id /* block */)arg2;
- (id)imageData;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 renderer:(id)arg2;
- (id)renderer;
- (id)thumbnailImageData;
- (id)wallpaper;

@end
