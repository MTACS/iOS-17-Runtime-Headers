
@interface VisionCoreLabelsFileParser : NSObject

+ (bool)isValidLabel:(id)arg1;
+ (bool)parseLabels:(id*)arg1 fromContentsOfURL:(id)arg2 invalidLabelPlaceholderObject:(id)arg3 validLabelIndexes:(id*)arg4 error:(id*)arg5;

@end
