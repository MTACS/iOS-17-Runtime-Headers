
@interface PPEventMetadataCacheEntry : NSObject {
    unsigned long long  _chunkIndex;
    NSDate * _expiration;
    PPEventMetadata * _metadata;
}

@property (nonatomic) unsigned long long chunkIndex;
@property (nonatomic, retain) NSDate *expiration;
@property (nonatomic, retain) PPEventMetadata *metadata;

- (void).cxx_destruct;
- (unsigned long long)chunkIndex;
- (id)expiration;
- (id)metadata;
- (void)setChunkIndex:(unsigned long long)arg1;
- (void)setExpiration:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
