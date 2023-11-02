
@interface SGQuickResponsesScores : NSObject {
    NSArray * _modelScores;
    NSArray * _normalizedModelScores;
}

@property (nonatomic, readonly) NSArray *modelScores;
@property (nonatomic, readonly) NSArray *normalizedModelScores;

+ (id)quickResponsesScoresWithModelScores:(id)arg1 normalizedModelScores:(id)arg2;

- (void).cxx_destruct;
- (id)initWithModelScores:(id)arg1 normalizedModelScores:(id)arg2;
- (id)modelScores;
- (id)normalizedModelScores;

@end
