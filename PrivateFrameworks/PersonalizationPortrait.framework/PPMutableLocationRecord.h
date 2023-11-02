
@interface PPMutableLocationRecord : PPLocationRecord

@property (nonatomic) unsigned short algorithm;
@property (nonatomic, retain) NSArray *contextualNamedEntities;
@property (nonatomic) double decayRate;
@property (nonatomic) unsigned int extractionAssetVersion;
@property (nonatomic, retain) NSString *extractionOsBuild;
@property (nonatomic) double initialScore;
@property (nonatomic, retain) PPLocation *location;
@property (nonatomic) double sentimentScore;
@property (nonatomic, retain) PPSource *source;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAlgorithm:(unsigned short)arg1;
- (void)setContextualNamedEntities:(id)arg1;
- (void)setDecayRate:(double)arg1;
- (void)setExtractionAssetVersion:(unsigned int)arg1;
- (void)setExtractionOsBuild:(id)arg1;
- (void)setInitialScore:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setSentimentScore:(double)arg1;
- (void)setSource:(id)arg1;
- (void)setUuid:(id)arg1;

@end
