
@interface AVTAvatarAttributeEditorSectionItem : NSObject <AVTAvatarAttributeEditorSectionItem, AVTAvatarAttributeEditorSectionItemInternal, AVTAvatarAttributeEditorSectionItemPrefetching, AVTAvatarUpdating, AVTDiscardableContent> {
    id /* block */  _avatarUpdater;
    UIImage * _cachedThumbnail;
    double  _heightRatio;
    NSString * _identifier;
    NSString * _localizedName;
    id /* block */  _presetResourcesProvider;
    bool  _selected;
    id /* block */  _stickerResourceProvider;
    id /* block */  _thumbnailProvider;
    id /* block */  discardableContentHandler;
}

@property (nonatomic, readonly, copy) id /* block */ avatarUpdater;
@property (nonatomic, retain) UIImage *cachedThumbnail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heightRatio;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *prefetchingIdentifier;
@property (nonatomic, readonly, copy) id /* block */ presetResourcesProvider;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly, copy) id /* block */ stickerResourceProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ thumbnailProvider;

- (void).cxx_destruct;
- (id /* block */)avatarUpdater;
- (id)cachedThumbnail;
- (id)description;
- (void)discardContent;
- (id /* block */)discardableContentHandler;
- (double)heightRatio;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 thumbnailProvider:(id /* block */)arg3 stickerResourceProvider:(id /* block */)arg4 presetResourcesProvider:(id /* block */)arg5 avatarUpdater:(id /* block */)arg6 heightRatio:(double)arg7 selected:(bool)arg8;
- (bool)isSelected;
- (id)localizedName;
- (id)prefetchingIdentifier;
- (id /* block */)presetResourcesProvider;
- (void)setCachedThumbnail:(id)arg1;
- (void)setDiscardableContentHandler:(id /* block */)arg1;
- (void)setSelected:(bool)arg1;
- (id /* block */)stickerResourceProvider;
- (id /* block */)thumbnailProvider;

@end
