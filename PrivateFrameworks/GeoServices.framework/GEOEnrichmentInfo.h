
@interface GEOEnrichmentInfo : NSObject <NSCopying> {
    GEOPDEnrichmentInfo * _enrichmentInfo;
    NSString * _showcaseId;
    NSString * _showcaseSharingImageUrl;
    NSString * _showcaseSharingSubtitle;
    NSString * _showcaseSharingTitle;
    NSString * _sourceId;
    NSString * _sourceName;
}

@property (nonatomic, readonly) NSString *showcaseId;
@property (nonatomic, readonly) NSString *showcaseSharingImageUrl;
@property (nonatomic, readonly) NSString *showcaseSharingSubtitle;
@property (nonatomic, readonly) NSString *showcaseSharingTitle;
@property (nonatomic, readonly) NSString *sourceId;
@property (nonatomic, readonly) NSString *sourceName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithEnrichmentInfo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pdEnrichmentInfo;
- (id)showcaseId;
- (id)showcaseSharingImageUrl;
- (id)showcaseSharingSubtitle;
- (id)showcaseSharingTitle;
- (id)sourceId;
- (id)sourceName;

@end
