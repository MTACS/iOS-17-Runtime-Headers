
@interface ATXScoreNormalizationArtifactsArchive : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _scoreNormalizationModelsDict;
}

@property (nonatomic, readonly) NSDictionary *scoreNormalizationModelsDict;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScoreNormalizationModelsDictionary:(id)arg1;
- (id)scoreNormalizationModelsDict;

@end
