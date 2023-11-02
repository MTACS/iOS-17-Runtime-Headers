
@interface CNSharingProfileAvatarItem : NSObject {
    id /* block */  _imageProvider;
    NSData * _memojiMetadata;
    id /* block */  _originalImageProvider;
    long long  _type;
    NSString * _variantIdentifier;
    bool  _wasSetFromFullPhotoPicker;
}

@property (nonatomic, readonly, copy) id /* block */ imageProvider;
@property (nonatomic) NSData *memojiMetadata;
@property (nonatomic, readonly, copy) id /* block */ originalImageProvider;
@property (nonatomic, readonly) long long type;
@property (nonatomic, copy) NSString *variantIdentifier;
@property (nonatomic) bool wasSetFromFullPhotoPicker;

- (void).cxx_destruct;
- (id /* block */)imageProvider;
- (id)initWithImageProvider:(id /* block */)arg1 originalImageProvider:(id /* block */)arg2 type:(long long)arg3;
- (id)initWithImageProvider:(id /* block */)arg1 type:(long long)arg2;
- (id)memojiMetadata;
- (id /* block */)originalImageProvider;
- (void)setMemojiMetadata:(id)arg1;
- (void)setVariantIdentifier:(id)arg1;
- (void)setWasSetFromFullPhotoPicker:(bool)arg1;
- (long long)type;
- (id)variantIdentifier;
- (bool)wasSetFromFullPhotoPicker;

@end
