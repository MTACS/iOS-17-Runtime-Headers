
@interface CHPostprocessingStep : NSObject

@property (readonly) bool modifiesOriginalTokens;

+ (bool)shouldAdjustColumnsFromPostprocessingStepOptions:(id)arg1;

- (bool)modifiesOriginalTokens;
- (id)process:(id)arg1 options:(id)arg2;

@end
