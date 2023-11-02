
@interface GEOEnrichmentData : NSObject <NSCopying> {
    GEOPDEnrichmentData * _enrichmentData;
    NSArray * _enrichmentEntities;
    NSData * _placecardEnrichmentMetadata;
}

@property (nonatomic, readonly) NSArray *enrichmentEntities;
@property (nonatomic, readonly) NSData *placecardEnrichmentMetadata;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)enrichmentEntities;
- (id)initWithEnrichmentData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)placecardEnrichmentMetadata;

@end
