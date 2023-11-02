
@interface AXMBrailleEdgesDetectorNode : AXMEvaluationNode

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (id)_generateResultFromImage:(id)arg1 canvasDescription:(id)arg2 invert:(bool)arg3;
- (unsigned char)_mapLuminance:(double)arg1 toDiscreteNumber:(unsigned long long)arg2 invert:(bool)arg3;
- (id)_processImage:(id)arg1 analaysisOptions:(id)arg2;
- (void)evaluate:(id)arg1 metrics:(id)arg2;

@end
