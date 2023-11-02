
@interface GEOServerResultScoreMetadata : NSObject {
    float  _normalizedScore;
}

@property (nonatomic) float normalizedScore;

- (id)initWithGEOServerResultScoreMetadata:(id)arg1;
- (float)normalizedScore;
- (void)setNormalizedScore:(float)arg1;

@end
