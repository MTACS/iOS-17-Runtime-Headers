
@interface NMBUIMediaTableCellConfiguration : NSObject {
    MPArtworkCatalog * _artworkCatalog;
    id /* block */  _downloadIndicatorTapAction;
    NMBUIMediaTableCellDownloadState * _downloadState;
    id  _modelObject;
    UIColor * _placeholderIconColor;
    UIImage * _placeholderImage;
    NSString * _placeholderSystemImageName;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, copy) id /* block */ downloadIndicatorTapAction;
@property (nonatomic, retain) NMBUIMediaTableCellDownloadState *downloadState;
@property (nonatomic, retain) id modelObject;
@property (nonatomic, retain) UIColor *placeholderIconColor;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, retain) NSString *placeholderSystemImageName;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)downloadIndicatorTapAction;
- (id)downloadState;
- (id)modelObject;
- (id)placeholderIconColor;
- (id)placeholderImage;
- (id)placeholderSystemImageName;
- (void)setArtworkCatalog:(id)arg1;
- (void)setDownloadIndicatorTapAction:(id /* block */)arg1;
- (void)setDownloadState:(id)arg1;
- (void)setModelObject:(id)arg1;
- (void)setPlaceholderIconColor:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderSystemImageName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
