
@interface CNSharingProfileAvatarItemProviderConfiguration : NSObject {
    CNPhotoPickerColorVariant * _animojiColor;
    NSData * _memojiMetadata;
    PRMonogramColor * _monogramColor;
}

@property (nonatomic, retain) CNPhotoPickerColorVariant *animojiColor;
@property (nonatomic, retain) NSData *memojiMetadata;
@property (nonatomic, retain) PRMonogramColor *monogramColor;

- (void).cxx_destruct;
- (id)animojiColor;
- (id)memojiMetadata;
- (id)monogramColor;
- (void)setAnimojiColor:(id)arg1;
- (void)setMemojiMetadata:(id)arg1;
- (void)setMonogramColor:(id)arg1;

@end
