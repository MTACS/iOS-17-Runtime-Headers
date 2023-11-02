
@interface ATXScoredInfoSuggestion : NSObject <NSCopying> {
    ATXInformationFeatureSet * _featureSet;
    double  _score;
    ATXInfoSuggestion * _suggestion;
}

@property (nonatomic, readonly) ATXInformationFeatureSet *featureSet;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) ATXInfoSuggestion *suggestion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureSet;
- (id)init;
- (id)initWithSuggestion:(id)arg1 featureSet:(id)arg2 score:(double)arg3;
- (double)score;
- (id)suggestion;

@end
