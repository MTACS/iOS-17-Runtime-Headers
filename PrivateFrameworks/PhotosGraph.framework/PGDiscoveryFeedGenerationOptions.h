
@interface PGDiscoveryFeedGenerationOptions : NSObject <NSCopying> {
    unsigned long long  _discoveryRankingMode;
}

@property (nonatomic) unsigned long long discoveryRankingMode;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)discoveryRankingMode;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setDiscoveryRankingMode:(unsigned long long)arg1;

@end
