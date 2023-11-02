
@interface AVTStickerRecentsButtonItem : NSObject <AVTStickerRecentsItem> {
    UIImage * _image;
    NSString * _localizedDescription;
    NSURL * _url;
    id /* block */  discardableContentHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) id /* block */ provider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)cellIdentifier;
- (void)discardContent;
- (id /* block */)discardableContentHandler;
- (id)image;
- (id)initWithLocalizedDescription:(id)arg1;
- (id)localizedDescription;
- (id /* block */)provider;
- (void)setDiscardableContentHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
