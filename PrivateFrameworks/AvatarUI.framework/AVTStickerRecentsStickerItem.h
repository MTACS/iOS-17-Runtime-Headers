
@interface AVTStickerRecentsStickerItem : NSObject <AVTStickerRecentsItem> {
    NSString * _avatarIdentifier;
    UIImage * _image;
    NSString * _localizedDescription;
    bool  _prereleaseSticker;
    id /* block */  _provider;
    NSString * _stickerName;
    NSURL * _url;
    id /* block */  discardableContentHandler;
}

@property (nonatomic, readonly, copy) NSString *avatarIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (getter=isPrereleaseSticker, nonatomic) bool prereleaseSticker;
@property (nonatomic, readonly, copy) id /* block */ provider;
@property (nonatomic, readonly, copy) NSString *stickerName;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)avatarIdentifier;
- (id)cellIdentifier;
- (void)discardContent;
- (id /* block */)discardableContentHandler;
- (id)image;
- (id)initWithAvatarIdentifier:(id)arg1 stickerName:(id)arg2 localizedName:(id)arg3 stickerProvider:(id /* block */)arg4;
- (bool)isPrereleaseSticker;
- (id)localizedDescription;
- (id /* block */)provider;
- (void)setDiscardableContentHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setPrereleaseSticker:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)stickerName;
- (id)url;

@end
