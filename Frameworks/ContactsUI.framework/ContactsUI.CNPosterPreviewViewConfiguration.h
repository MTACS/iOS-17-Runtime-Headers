
@interface ContactsUI.CNPosterPreviewViewConfiguration : NSObject {
    void backgroundColor;
    void displayName;
    void isEditingSNaP;
    void monogramText;
    void photoAssetID;
    void posterArchiveData;
    void posterConfiguration;
}

@property (nonatomic, readonly) bool hasExistingPoster;

+ (id)configurationForExistingPosterConfiguration:(id)arg1 displayName:(id)arg2;
+ (id)configurationForNewPosterWithPhotoAssetID:(id)arg1 backgroundColor:(id)arg2 displayName:(id)arg3 isEditingSNaP:(bool)arg4;
+ (id)configurationForNewPosterWithPhotoAssetID:(id)arg1 backgroundColor:(id)arg2 displayName:(id)arg3 isEditingSNaP:(bool)arg4 monogramText:(id)arg5;
+ (id)configurationForPosterArchiveData:(id)arg1 displayName:(id)arg2;

- (void).cxx_destruct;
- (bool)hasExistingPoster;
- (id)init;

@end
