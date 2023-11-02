
@interface MatchedFeatures : NSObject {
    double  _characterMatchRatio;
    NSMutableArray * _matchedPositions;
    NSArray * _matchedTypes;
    unsigned long long  _photoFeatureIndex;
    unsigned long long  _tokenIndex;
    double  _tokenMatchRatio;
}

@property double characterMatchRatio;
@property (retain) NSMutableArray *matchedPositions;
@property (retain) NSArray *matchedTypes;
@property unsigned long long photoFeatureIndex;
@property unsigned long long tokenIndex;
@property double tokenMatchRatio;

- (void).cxx_destruct;
- (double)characterMatchRatio;
- (id)initMatchedFeaturesTokenIndex:(unsigned long long)arg1 photoFeatureIndex:(unsigned long long)arg2 matchedPositions:(id)arg3 tokenMatchRatio:(double)arg4 characterMatchRatio:(double)arg5 matchedTypes:(id)arg6;
- (id)matchedPositions;
- (id)matchedTypes;
- (unsigned long long)photoFeatureIndex;
- (void)setCharacterMatchRatio:(double)arg1;
- (void)setMatchedPositions:(id)arg1;
- (void)setMatchedTypes:(id)arg1;
- (void)setPhotoFeatureIndex:(unsigned long long)arg1;
- (void)setTokenIndex:(unsigned long long)arg1;
- (void)setTokenMatchRatio:(double)arg1;
- (unsigned long long)tokenIndex;
- (double)tokenMatchRatio;

@end
