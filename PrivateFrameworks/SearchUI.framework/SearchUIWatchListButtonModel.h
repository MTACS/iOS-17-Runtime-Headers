
@interface SearchUIWatchListButtonModel : NSObject {
    unsigned long long  _buttonType;
    NSURL * _punchoutURL;
    NSString * _storeIdentifier;
    NSString * _subtitle;
    SFImage * _thumbnailImage;
    NSString * _title;
    SearchUIWatchListState * _watchListState;
}

@property unsigned long long buttonType;
@property (retain) NSURL *punchoutURL;
@property (retain) NSString *storeIdentifier;
@property (retain) NSString *subtitle;
@property (retain) SFImage *thumbnailImage;
@property (retain) NSString *title;
@property (retain) SearchUIWatchListState *watchListState;

- (void).cxx_destruct;
- (unsigned long long)buttonType;
- (id)punchoutURL;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setPunchoutURL:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWatchListState:(id)arg1;
- (id)storeIdentifier;
- (id)subtitle;
- (id)thumbnailImage;
- (id)title;
- (id)watchListState;

@end
