
@interface WFDialogContentListItem : WFDialogListItem <NSSecureCoding> {
    NSData * _archivedContentItem;
    WFContentItem * _contentItem;
    bool  _hideSubtitle;
    WFImage * _image;
    NSString * _subtitle;
}

@property (nonatomic, retain) NSData *archivedContentItem;
@property (nonatomic, retain) WFContentItem *contentItem;
@property (nonatomic) bool hideSubtitle;
@property (nonatomic, retain) WFImage *image;
@property (nonatomic, copy) NSString *subtitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_loadContentItemWithCompletion:(id /* block */)arg1;
- (id)archivedContentItem;
- (id)contentItem;
- (void)encodeWithCoder:(id)arg1;
- (bool)hideSubtitle;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentItem:(id)arg1 selected:(bool)arg2 hideSubtitle:(bool)arg3;
- (id)initWithContentItem:(id)arg1 selected:(bool)arg2 serializedPossibleState:(id)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 selected:(bool)arg4 contentItem:(id)arg5 hideSubtitle:(bool)arg6 serializedPossibleState:(id)arg7;
- (bool)loadAltTextWithCompletion:(id /* block */)arg1;
- (bool)loadImageWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (bool)loadSubtitleWithCompletion:(id /* block */)arg1;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)setArchivedContentItem:(id)arg1;
- (void)setContentItem:(id)arg1;
- (void)setHideSubtitle:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
