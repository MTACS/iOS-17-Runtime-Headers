
@interface SUScriptMediaPlayerItem : SUScriptObject {
    SUMediaPlayerItem * _mediaItem;
}

@property (copy) NSString *URL;
@property (copy) NSString *backgroundImageURL;
@property (copy) NSString *bookmarkIdentifier;
@property (copy) NSString *initialOrientation;
@property (retain) NSNumber *itemIdentifier;
@property (copy) NSString *itemType;
@property (retain) NSNumber *playableDuration;
@property (copy) NSString *subtitle;
@property (copy) NSString *title;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)URL;
- (id)_className;
- (id)attributeKeys;
- (id)backgroundImageURL;
- (id)bookmarkIdentifier;
- (id)copyNativeMediaPlayerItem;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initialOrientation;
- (id)itemIdentifier;
- (id)itemType;
- (id)playableDuration;
- (id)scriptAttributeKeys;
- (void)setBackgroundImageURL:(id)arg1;
- (void)setBookmarkIdentifier:(id)arg1;
- (void)setInitialOrientation:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setPlayableDuration:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)subtitle;
- (id)title;

@end
