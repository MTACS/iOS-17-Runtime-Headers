
@interface FCTopicalNode : NSObject <NSCopying> {
    NSSet * _children;
    NSSet * _displayedElements;
    double  _highestScoringRelativeScoreMultiplier;
    NSString * _identifier;
    NSSet * _identifiers;
    FCTopicalNode * _parent;
    double  _parentRawScore;
    double  _relatedness;
    double  _relatednessKWeight;
    double  _relatednessThreshold;
    double  _score;
    double  _scoreMultiplier;
    bool  _scored;
    double  _specificity;
    NSString * _storedNodeIdentifier;
    NSCountedSet * _topicCollections;
    double  _topicScoreWeight;
}

@property (retain) NSString *identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
