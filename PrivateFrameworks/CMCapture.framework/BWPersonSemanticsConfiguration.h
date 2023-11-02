
@interface BWPersonSemanticsConfiguration : BWInferenceConfiguration {
    bool  _appliesFinalCropRect;
    unsigned int  _enabledSemantics;
}

@property (nonatomic) bool appliesFinalCropRect;
@property (nonatomic) unsigned int enabledSemantics;

+ (unsigned int)personSemanticForAttachedMediaKey:(id)arg1;

- (bool)appliesFinalCropRect;
- (unsigned int)enabledSemantics;
- (void)setAppliesFinalCropRect:(bool)arg1;
- (void)setEnabledSemantics:(unsigned int)arg1;

@end
