
@interface BWFaceprintInferenceConfiguration : BWInferenceConfiguration {
    unsigned long long  _maximumNumberOfFaces;
}

@property (nonatomic) unsigned long long maximumNumberOfFaces;

- (unsigned long long)maximumNumberOfFaces;
- (void)setMaximumNumberOfFaces:(unsigned long long)arg1;

@end
