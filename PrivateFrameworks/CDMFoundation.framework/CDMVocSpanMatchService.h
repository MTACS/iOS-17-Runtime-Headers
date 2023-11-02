
@interface CDMVocSpanMatchService : CDMBaseSpanMatchService

+ (Class)spanMatcherClass;

- (id)setupSpanMatcher:(id)arg1;
- (bool)shouldBeUsedForAsrAlternatives;

@end
