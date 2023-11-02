
@interface BWPhotosCurationInferenceConfiguration : BWVisionInferenceConfiguration {
    int  _semanticDevelopmentVersion;
}

@property (nonatomic) int semanticDevelopmentVersion;

+ (id)configuration;

- (id)initWithInferenceType:(int)arg1;
- (int)semanticDevelopmentVersion;
- (void)setSemanticDevelopmentVersion:(int)arg1;

@end
