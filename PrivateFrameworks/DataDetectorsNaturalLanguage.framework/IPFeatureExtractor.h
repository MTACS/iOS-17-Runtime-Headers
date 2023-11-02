
@interface IPFeatureExtractor : NSObject

+ (id)defaultExtractor;

- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (id)queue;

@end
