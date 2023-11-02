
@interface PUSharingHeaderController : NSObject {
    <PUSharingHeaderDataProvider> * _dataProvider;
    LPImage * _icloudLinkImage;
    LPLinkMetadata * _linkMetadata;
    LPImage * _placeholderImage;
    <PXDisplayAsset> * _sharingHeaderBackAsset;
    <PXDisplayAsset> * _sharingHeaderFrontAsset;
    bool  _showingUnmodifiedOriginalThumbnail;
}

@property (nonatomic, readonly) <PUSharingHeaderDataProvider> *dataProvider;
@property (nonatomic, retain) LPLinkMetadata *linkMetadata;

+ (id)new;

- (void).cxx_destruct;
- (id)_linkPresentationImageForPerson:(id)arg1;
- (id)_sharingHeaderStatus;
- (id)createTextAttachmentForGlyphImageWithName:(id)arg1;
- (id)dataProvider;
- (id)init;
- (id)initWithDataProvider:(id)arg1;
- (id)linkMetadata;
- (void)setLinkMetadata:(id)arg1;
- (void)updateIfNeeded;

@end
