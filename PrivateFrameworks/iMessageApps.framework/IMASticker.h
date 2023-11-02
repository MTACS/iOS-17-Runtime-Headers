
@interface IMASticker : NSObject {
    NSString * _accessibilityLabel;
    NSDictionary * _ckAttributionInfo;
    NSString * _externalURI;
    NSURL * _fileURL;
    NSData * _metadata;
    NSArray * _representations;
    NSNumber * _stickerEffectType;
    NSString * _stickerIdentifier;
    NSString * _stickerName;
}

@property (nonatomic, readonly, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly, copy) NSDictionary *ckAttributionInfo;
@property (nonatomic, readonly, copy) NSString *externalURI;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly, copy) NSData *metadata;
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic, readonly, copy) NSNumber *stickerEffectType;
@property (nonatomic, readonly, copy) NSString *stickerIdentifier;
@property (nonatomic, readonly, copy) NSString *stickerName;

+ (double)screenScale;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)ckAttributionInfo;
- (id)externalURI;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 stickerName:(id)arg2 accessibilityLabel:(id)arg3 representations:(id)arg4;
- (id)initWithStickerIdentifier:(id)arg1 fileURL:(id)arg2 representations:(id)arg3 effectType:(id)arg4 externalURI:(id)arg5 stickerName:(id)arg6 accessibilityLabel:(id)arg7 metadata:(id)arg8 ckAttributionInfo:(id)arg9;
- (id)metadata;
- (id)representations;
- (void)setRepresentations:(id)arg1;
- (id)stickerEffectType;
- (id)stickerIdentifier;
- (id)stickerName;

@end
