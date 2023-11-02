
@interface QLWebItemTransformer : QLItemTransformer

+ (id)allowedOutputClasses;

- (id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id*)arg3;

@end
