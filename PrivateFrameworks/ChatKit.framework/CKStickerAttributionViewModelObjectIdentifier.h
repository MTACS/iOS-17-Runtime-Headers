
@interface CKStickerAttributionViewModelObjectIdentifier : CKAttributionViewModelObjectIdentifier {
    IMSticker * _sticker;
}

@property (nonatomic, readonly) IMSticker *sticker;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAssociatedMessageType:(long long)arg1 sticker:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sticker;

@end
