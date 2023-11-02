
@interface SSFileResultBuilder : SSResultBuilder {
    NSString * _contentType;
    NSDate * _creationDate;
    NSString * _fileProviderDomainId;
    NSString * _fileProviderId;
    bool  _isFolder;
    NSString * _kind;
    NSDate * _modificationDate;
    NSString * _name;
    NSNumber * _pageCount;
    NSNumber * _sizeInBytes;
    NSString * _thumbnailURL;
}

@property (nonatomic, retain) NSString *contentType;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *fileProviderDomainId;
@property (nonatomic, retain) NSString *fileProviderId;
@property (nonatomic) bool isFolder;
@property (nonatomic, retain) NSString *kind;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *pageCount;
@property (nonatomic, retain) NSNumber *sizeInBytes;
@property (nonatomic, retain) NSString *thumbnailURL;

+ (id)bundleId;
+ (struct CGSize { double x1; double x2; })defaultThumbnailSizeIsCompact:(bool)arg1;
+ (bool)isCoreSpotlightResult;
+ (id)stringWithModificationDate:(id)arg1 creationDate:(id)arg2;
+ (id)stringWithPageCount:(id)arg1;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)buildAppTopHitEntityCardSection;
- (id)buildButtonItems;
- (bool)buildButtonItemsAreTrailing;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildPunchoutCommandForFile;
- (id)buildPunchouts;
- (id)buildThumbnail;
- (id)contentType;
- (id)creationDate;
- (id)fileProviderDomainId;
- (id)fileProviderId;
- (id)initWithResult:(id)arg1;
- (bool)isFolder;
- (id)kind;
- (id)modificationDate;
- (id)name;
- (id)openFileProviderItemCommand;
- (id)pageCount;
- (void)setContentType:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFileProviderDomainId:(id)arg1;
- (void)setFileProviderId:(id)arg1;
- (void)setIsFolder:(bool)arg1;
- (void)setKind:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPageCount:(id)arg1;
- (void)setSizeInBytes:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (id)sizeInBytes;
- (id)thumbnailURL;

@end
