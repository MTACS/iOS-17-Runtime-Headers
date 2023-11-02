
@interface GEOEnrichmentDataEntity : NSObject {
    NSArray * _appAdamIds;
    GEOPDEnrichmentDataEntity * _enrichmentDataEntity;
    NSString * _enrichmentHtml;
    GEOEnrichmentInfo * _enrichmentInfo;
    NSData * _enrichmentMetadata;
}

@property (nonatomic, readonly) NSArray *appAdamIds;
@property (nonatomic, readonly) NSString *enrichmentHtml;
@property (nonatomic, readonly) GEOEnrichmentInfo *enrichmentInfo;
@property (nonatomic, readonly) NSData *enrichmentMetadata;

- (void).cxx_destruct;
- (id)appAdamIds;
- (id)description;
- (id)enrichmentHtml;
- (id)enrichmentInfo;
- (id)enrichmentMetadata;
- (unsigned long long)hash;
- (id)initWithEnrichmentDataEntity:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
