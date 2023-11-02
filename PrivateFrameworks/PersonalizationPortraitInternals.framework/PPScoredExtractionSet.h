
@interface PPScoredExtractionSet : NSObject {
    bool  _cloudSync;
    double  _decayRate;
    NSArray * _entities;
    unsigned long long  _entityAlgorithm;
    NSMutableDictionary * _locations;
    double  _sentimentScore;
    PPSource * _source;
    unsigned long long  _topicAlgorithm;
    NSArray * _topics;
    NSMutableArray * _topicsExactMatchesInSourceText;
}

@property (nonatomic) bool cloudSync;
@property (nonatomic) double decayRate;
@property (nonatomic, retain) NSArray *entities;
@property (nonatomic) unsigned long long entityAlgorithm;
@property (nonatomic, retain) NSMutableDictionary *locations;
@property (nonatomic) double sentimentScore;
@property (nonatomic, retain) PPSource *source;
@property (nonatomic) unsigned long long topicAlgorithm;
@property (nonatomic, retain) NSArray *topics;
@property (nonatomic, retain) NSMutableArray *topicsExactMatchesInSourceText;

- (void).cxx_destruct;
- (unsigned long long)_donateLocationsWithContextualNamedEntities:(id)arg1;
- (void)addLocation:(id)arg1 algorithm:(unsigned short)arg2;
- (bool)cloudSync;
- (double)decayRate;
- (id)description;
- (id)entities;
- (unsigned long long)entityAlgorithm;
- (void)flushWrites;
- (id)locations;
- (id)numberOfExtractions;
- (double)sentimentScore;
- (void)setCloudSync:(bool)arg1;
- (void)setDecayRate:(double)arg1;
- (void)setEntities:(id)arg1;
- (void)setEntityAlgorithm:(unsigned long long)arg1;
- (void)setLocations:(id)arg1;
- (void)setSentimentScore:(double)arg1;
- (void)setSource:(id)arg1;
- (void)setTopicAlgorithm:(unsigned long long)arg1;
- (void)setTopics:(id)arg1;
- (void)setTopicsExactMatchesInSourceText:(id)arg1;
- (id)source;
- (unsigned long long)topicAlgorithm;
- (id)topics;
- (id)topicsExactMatchesInSourceText;
- (void)writeSynchronous;
- (void)writeWithEntityStore:(id)arg1;

@end
