
@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject {
    long long  _avatarType;
    UIImage * _compositedImage;
    NSData * _memojiMetadata;
    UIImage * _originalImage;
    NSString * _variantName;
    bool  _wasSelectedInFullPhotoPicker;
}

@property (nonatomic) long long avatarType;
@property (nonatomic, retain) UIImage *compositedImage;
@property (nonatomic) NSData *memojiMetadata;
@property (nonatomic, retain) UIImage *originalImage;
@property (nonatomic, copy) NSString *variantName;
@property (nonatomic) bool wasSelectedInFullPhotoPicker;

- (void).cxx_destruct;
- (long long)avatarType;
- (id)compositedImage;
- (id)memojiMetadata;
- (id)originalImage;
- (void)setAvatarType:(long long)arg1;
- (void)setCompositedImage:(id)arg1;
- (void)setMemojiMetadata:(id)arg1;
- (void)setOriginalImage:(id)arg1;
- (void)setVariantName:(id)arg1;
- (void)setWasSelectedInFullPhotoPicker:(bool)arg1;
- (id)variantName;
- (bool)wasSelectedInFullPhotoPicker;

@end
