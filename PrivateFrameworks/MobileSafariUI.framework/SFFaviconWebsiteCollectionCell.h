
@interface SFFaviconWebsiteCollectionCell : UICollectionViewListCell {
    UIImage * _favicon;
    id  _faviconRequestToken;
    NSURL * _siteURL;
    NSString * _title;
}

- (void).cxx_destruct;
- (void)_requestFavicon;
- (void)_updateContentConfiguration;
- (void)setURL:(id)arg1 withTitle:(id)arg2;

@end
