
@interface _WBSTabGroupIconMetadata : NSObject {
    UIImage * _iconImage;
    NSArray * _tabUrlArray;
    id  _token;
    NSString * _uuid;
}

@property (copy) UIImage *iconImage;
@property (nonatomic, retain) id token;

- (void).cxx_destruct;
- (id)_arrayOfThumbnailURLsShownInFolderIconFromTabsArray:(id)arg1;
- (id)_configuration;
- (bool)hasSameIconAsTabGroup:(id)arg1;
- (id)iconImage;
- (id)initWithTabGroup:(id)arg1 token:(id)arg2;
- (void)setIconImage:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
