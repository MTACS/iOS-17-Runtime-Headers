
@interface SCMLAnalysisResult : NSObject {
    NSDictionary * _scoresForLabels;
    bool  _sensitive;
    NSNumber * _sensitivityScore;
}

@property (nonatomic, readonly) NSDictionary *scoresForLabels;
@property (nonatomic, readonly) bool sensitive;
@property (nonatomic, readonly) NSNumber *sensitivityScore;

+ (id)obfuscateLabelName:(id)arg1;
+ (id)obfuscateLabels:(id)arg1;

- (void).cxx_destruct;
- (id)initWithSensitive:(bool)arg1 sensitivityScore:(id)arg2 scoresForLabels:(id)arg3;
- (id)scoresForLabels;
- (bool)sensitive;
- (id)sensitivityScore;

@end
